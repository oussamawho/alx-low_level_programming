#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int e;
for (e = 0; str[e] != '\0'; ++e)
{
if (e % 2 == 0)
_putchar(str[e]);
}
_putchar('\n');
}
