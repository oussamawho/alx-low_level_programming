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
	unsigned int i;
	int sum = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
		int num = va_arg(arg, int);
		sum += num

	va_end(arg);

	return (sum);
}
