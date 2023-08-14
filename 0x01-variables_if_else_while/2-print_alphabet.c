#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main()
{
    char alphabet[26] = "abcdefghijqlmnopqrstuvwxyz";
    int i;
    for (i = 0; i < 26; i++)
    {
        putchar(alphabet[i]);
    }
    putchar ("\n");
}
