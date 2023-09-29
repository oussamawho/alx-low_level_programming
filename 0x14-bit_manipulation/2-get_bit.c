#include <stdio.h>
#include "main.h"

/**
 * get_bit - Get the value of a bit at a specific index.
 * @n: The number from which to get the bit.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the specified index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
unsigned long int mask = 1 << index;
if ((n & mask) == 0)
return (0);
}
else
{
return (1);
}
}
