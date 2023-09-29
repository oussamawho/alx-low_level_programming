#include "main.h"

/**
 * flip_bits - Calculate the number of bits to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits (unsigned long int n, unsigned long int m)
{
unsigned long int xorval = n ^ m;
unsigned int count = 0;
while (xorval)
{
if (xorval & 1u1)
count++;
xorval = xorval >> 1;
}
return (count);
}
