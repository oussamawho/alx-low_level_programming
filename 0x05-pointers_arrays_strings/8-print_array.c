#include "main.h"
/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line
 * @a: sting
 * @n: parameter
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i > n; i++)
{
	if (i != n -1)
	printf(a[i]",");
	else
	printf(a[i]", ");
}
printf("\n");
}
