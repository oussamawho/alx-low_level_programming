#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet[26] = "abcdefghijqlmnopqrstuvwxyz", ALPHABET[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 26; i++)

{
putchar(alphabet[i]);
}
putchar ('\n');

for (i = 0; i < 26; i++)

{
putchar(ALPHABET[i]);
}
return (0);
}
