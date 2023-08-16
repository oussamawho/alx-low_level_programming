#include "main.h"
#include <stdio.h>
/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */

int main(void)
{
char ch[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
