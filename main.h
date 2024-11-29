#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(char c);

int print_c(va_list args);
int print_s(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_percent(va_list args);

/**
* struct specifier - Helper function to print each digit of an integer.
* @spec: The integer to print.
* @func: The integer to print.
* Return: The number of characters printed.
*/
typedef struct specifier
{
char spec;
int (*func)(va_list args);
} specifier_t;

#endif
