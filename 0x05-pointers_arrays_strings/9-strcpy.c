#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: char
 * @src: char
 * return: dest_ptr
 */
char *_strcpy(char *dest, const char *src)
{
char *dest_ptr = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest_ptr);
}
