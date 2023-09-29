#include "main.h"

/**
 * clear_bit - Clear (set to 0) the value of a bit at a specific index.
 * @n: A pointer to the number from which to clear the bit.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

unsigned long int mask = 1 << index;
*n = *n & ~mask;
return (1);
}
