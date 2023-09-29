#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @*b: string of 0 and 1 chars
 * Returne: 0 if *b is "NULL" OR "x" if *b is string of 0 and 1 chars
 */

unsigned int binary_to_uint(const char *b)
{
int x;
int n;
	if (!b)
	return (0);
	while (*b)
{
	if (*b != '0' && *b != '1')
	return (0);
	x = x + (*b * pow(2, n));
	*b++;
	n++;
}
	return (x);
}