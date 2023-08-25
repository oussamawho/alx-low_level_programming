#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: int
 */

void reverse_array(int *a, int n)
{
int i;
int aux[n];

for (int i = 0; i < n; i++)
{
aux[n - 1 - i] = a[i];
}

for (int i = 0; i < n; i++)
{
a[i] = aux[i];
}
}
