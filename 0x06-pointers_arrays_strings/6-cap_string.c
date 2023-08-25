#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer
 * return: 
 */

char *cap_string(char *s)
{
int i;
for(i=0; i<strlen(s); i++)
{
if (i==0||s[i-1]==' '&&s[i]>='a'&&s[i]<='z')
s[i]=toupper(s[i]);
}
return(s);
}
