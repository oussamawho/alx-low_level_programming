#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: string
 * @n: number
 * @...: a variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index = 0;
va_start(nums, n);
while (index < n)
{
printf("%d", va_arg(nums, int));
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
index++;
}
printf("\n");
va_end(nums);
}
