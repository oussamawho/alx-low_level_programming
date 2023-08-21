#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int e = 0;
while (s[e])
e++;
while (e--);
_putchar(s[e]);
}
_putchar('\n');
}
