#include "main.h"
#include <stdio.h>
/**
 * *_strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: char
 * @src: char
 * return: pointer
 */

char *_strcpy(char *dest, const char *src)
{
int e = -1;
do {
e++
dest[e] = src[e];
} while (src[e] != '\0');

return (dest);
}
