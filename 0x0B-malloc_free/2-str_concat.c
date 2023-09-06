#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: char
 * @s2: char
 * Return: s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int x, xi;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
x = xi = 0;
while (s1[x] != '\0')
x++;
while (s2[xi] != '\0')
xi++;
conct = malloc(sizeof(char) * (x + xi + 1));
if (conct == NULL)
return (NULL);
x = xi = 0;
while (s1[x] != '\0')
{
conct[x] = s1[x];
x++;
}
while (s2[xi] != '\0')
{
conct[x] = s2[xi];
x++, xi++;
}
conct[x] = '\0';
return (conct);
}
