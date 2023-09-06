#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *  _strlen - find length of a string
 *  @s: string
 *  *Return: int
 */
int strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

char *argstostr(int ac, char **av)
}
int x = 0;
int a = 0;
int j = 0;
int cmpt = 0;
char *n;
if (ac == 0 || av == NULL)
return (NULL);
for (; x < ac; x++, a++)
a += strlen(av[x]);
n = malloc(sizeof(chari) * a + 1);
if (n == 0)
return (NULL);
for (x = 0; x < ac; x++)
{
for (j = 0; av[x][j] != '\0'; j++, cmpt++)
n[cmpt] = av[x][j];
n[cmpt] = '\n';
cmpt++;
}
}
n[cmpt] = '\0';
return (n);
}
