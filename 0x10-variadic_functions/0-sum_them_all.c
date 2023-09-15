#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number
 * @...: parameter to calculate the sum of
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
va_start(args, n);
int sum = 0;
for (unsigned int i = 0; i < n; i++)
{
int num = va_arg(args, int);
sum += num;
}
va_end(args);
return (sum);
}
