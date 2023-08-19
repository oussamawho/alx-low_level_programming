#include "main.h"

/**
 * print_triangle - Prints a triangle made of '#' characters followed by a newline.
 *
 * @size: The size of the triangle to be printed.
 *        If size is 0 or less, only a newline is printed.
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}

for (int row = 1; row <= size; row++)
{
for (int space = 0; space < size - row; space++)
{
_putchar(' ');
}
for (int hash = 0; hash < row; hash++)
{
_putchar('#');
}
 _putchar('\n');
}
}
