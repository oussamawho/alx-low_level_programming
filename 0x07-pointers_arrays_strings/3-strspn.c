#include "main.h"
/**
 * _strspn -  get the length of a prefix substring
 * @s: char
 * @accept: input char
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int u = 0;
int j;

while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
{
u++;
break;
}
else if (accept[j + 1] == '\0')
return (u);
}
s++;
}
return (u);
}
