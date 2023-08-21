#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int d;

	while (s[counter] != '\0')
	counter++;
	for (d = 0; d < counter; d++)
	{
		counter--;
		rev = s[d];
		s[d] = s[counter];
		s[counter] = rev;
	}
}

