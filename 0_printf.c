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

    /* Check for NULL format string */
    if (format == NULL)
        return (-1);

    va_start(args, format);

    /* Process the format string */
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            /* Check if the next character is a valid format specifier */
            if (format[i + 1] == '\0')  /* If '%' is the last character */
            {
                return (-1);
            }
            else if (format[i + 1] == '%')  /* Handle '%%' */
            {
                len += _putchar('%');
                i++;  /* Skip over the '%' */
            }
            else if (format[i + 1] == 'c')  /* Handle character */
            {
                func = print_c;
                len += func(args);
                i++;  /* Skip over the 'c' */
            }
            else if (format[i + 1] == 's')  /* Handle string */
            {
                func = print_s;
                len += func(args);
                i++;  /* Skip over the 's' */
            }
            else if (format[i + 1] == 'd' || format[i + 1] == 'i')  /* Handle integer */
            {
                func = print_int;
                len += func(args);
                i++;  /* Skip over 'd' or 'i' */
            }
            else  /* Handle invalid format specifier */
            {
                len += _putchar('%');
            }
        }
        else
        {
            len += _putchar(format[i]);
        }

        i++;  /* Move to the next character */
    }

    va_end(args);
    return (len);
}
