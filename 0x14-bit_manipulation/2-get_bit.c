#include <stdio.h>
#include "main.h"

/**
 * get_bit - Get the value of a bit at a specific index.
 * @n: The number from which to get the bit.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the specified index
 * or -1 if an error occurr
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (n >> index & 1);
}
