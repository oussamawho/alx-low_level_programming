#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @*str: char
 * Returne
 */
char *_strdup(char *str)
{
int i = 0;
int s = 0;/*s = size*/
char *x;
if (str == NULL)
return (NULL);
for (; str[s] != '\0'; s++)
;
x = malloc(s * sizeof(*str) + 1);
if (x == 0)
return (NULL);
else
{
for (; i < s; i++)
x[i] = str[i];
}
return (x);
}
