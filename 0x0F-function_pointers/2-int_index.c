#include "function_pointers.h"
/**
 * int_index - searche for an integer
 * @array: array
 * @size: int
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array == 0 || size <= 0 || cmp == 0)
return (-1);
for (x = 0; x < size; x++)
{
if (cmp(array[x]))
return (x);
}
return (-1);
}
