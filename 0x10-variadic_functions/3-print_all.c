#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *fmt = format;
char *str;

va_start(args, format);

while (fmt && *fmt)
{
if (*fmt == 'c')
printf("%c", va_arg(args, int));
else if (*fmt == 'i')
printf("%d", va_arg(args, int));
else if (*fmt == 'f')
printf("%f", va_arg(args, double));
else if (*fmt == 's')
{
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
}
fmt++;
if (*fmt)
printf(", ");
}
printf("\n");
va_end(args);
}
