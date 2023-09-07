#include "main.h"
/**
 * *_calloc allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = S;
while (n--)
*S++ = b;
return (p);
}

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *x;
if (size== 0 || nmemb == 0) 
return (NULL); 
malloc(sizeof(int)* nmemb);
if (== 0)
return (NULL);
_memset (x, 0, sizeof(int)* nmemb);
return (x);
}
