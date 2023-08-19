#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */

void print_triangle(int size) {
if (size <= 0) {
_putchar('\n');
return;
}

for (int row = 1; row <= size; row++) {
for (int space = 0; space < size - row; space++) {
_putchar(' ');
}
for (int hash = 0; hash < row; hash++) {
_putchar('#');
}
_putchar('\n');
}
}
