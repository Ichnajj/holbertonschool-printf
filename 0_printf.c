#include <stdarg.h>
#include "main.h"

/**
* _printf - Custom printf function that handles format specifiers.
* @format: The format string.
*
* Return: The number of characters printed.
*/
int _printf(const char *format, ...)
{
    va_list args;
    int len = 0;
    int i = 0;
    int (*func)(va_list);

    // Check if the format string is NULL
    if (format == NULL)
        return (-1);

    va_start(args, format);

    // Loop through the format string
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            // If '%' is followed by another '%', print '%' and continue
            if (format[i + 1] == '%')
            {
                len += _putchar('%');
                i++;  // Skip the next '%' character
            }
            // Handle other format specifiers
            else if (format[i + 1] == 'c')
            {
                func = print_c;
                len += func(args);
                i++;
            }
            else if (format[i + 1] == 's')
            {
                func = print_s;
                len += func(args);
                i++;
            }
            else if (format[i + 1] == 'd' || format[i + 1] == 'i')
            {
                func = print_int;
                len += func(args);
                i++;
            }
            else if (format[i + 1] == '%')
            {
                len += _putchar('%');
            }
            else
            {
                // If no valid format specifier follows '%', treat it as an error
                len += _putchar('%');
            }
        }
        else
        {
            // Otherwise print the current character
            len += _putchar(format[i]);
        }
        i++;
    }

    va_end(args);

    return (len);
}

