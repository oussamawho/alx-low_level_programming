#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
