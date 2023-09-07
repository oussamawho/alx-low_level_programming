#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string.
 * @n: Number of bytes from n2 to concatenate.
 * Return: Pointer to space in memory containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int x, j;
unsigned int 1_length, 2_length;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2=;
for (1_length = 0; s1[1_length] != '\0'; 1_length++)
;
for (2_length = 0; s2[2_length] != '\0'; 2_length++)
;
s = malloc(1_length + n + 1);
if (s == NULL)
{
return (NULL);
}
for (x = 0; s1[x] != '\0'; x++)
str[x] = s1[x];
for (j = 0; j<n; j++)
{
s[x] = s2[j];
x++;
}
s[x] = '\0';
return (s);
}
