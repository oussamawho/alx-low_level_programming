#include <stdio.h>
#include "main.h"

/**
 * set_bit - Set the value of a bit at a specific index to 1.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

unsigned long int mask = 1 << index;
*n = *n | mask;

return (1);
}
