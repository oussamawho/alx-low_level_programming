#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer
 * return: 
 */

char *cap_string(char *s)
{
char *ptr = s;
int a = 1;
while (*s)
{
if (a(*s))
a = 1;
else if (islower(*s) && a)
{
*s -= 32;
a = 0;
}
else
a = 0;
s++
}
return (ptr);
}
