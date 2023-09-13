#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name
 * @name: string
 * @f: pointer to function
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;

	f(name);
}
