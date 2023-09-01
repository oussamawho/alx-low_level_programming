#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
if (s == '\0')
{
_puchar('\n');
}
else
{
_putchar(*s);
s++;
_puts_recursion(s);
}
}
