#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: int
 * return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
for (i = 0; i < n--; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}

