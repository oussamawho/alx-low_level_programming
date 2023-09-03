#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: char
 * @needle: char
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *s = haystack;
char *k = needle;
while (*s == *k && *k != '\0')
{
s++;
k++;
}
if (*k == '\0')
return (haystack);
}
return (0);
}
