#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number
 * @...: parameter to calculate the sum of
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;

	va_start(arg, n);
	unsigned int i;
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}
