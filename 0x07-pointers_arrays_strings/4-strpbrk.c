#include "main.h"
/**
 * *_strpbrk - searche a string for any of a set of bytes
 * @s: char
 * @accept: char 
 * Return: pointer s
 */
char *_strpbrk(char *s, char *accept)
{
int n, l;
char *q;
n = 0;
while (s[n] != '\0')
{
l = 0;
while (accept[l] != '\0')
{
if (accept[l] == s[n])
{
q = &s[n];
return (q);
}
l++;
}
n++;
}
return (0);
}
