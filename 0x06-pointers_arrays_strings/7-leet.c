#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * leet - encodes a string into 1337
 * @c: pointer
 * @alpha: array
 * @num: array
 * return: cp
 */

char *leet(char *c)
{
char *cp = c;
char alph[] = {'A', 'E', 'O', 'T', 'L'};
int num[] = {4, 3, 0, 7, 1};
int i;

while (*c)
{
for (i = 0; i < sizeof(alph) / sizeof(char); i++)
{
if (*c == alph[i] || *c == alph[i] + 32)
{
*c = 48 + num[i];
}
}
c++;
}
return (cp);
}
