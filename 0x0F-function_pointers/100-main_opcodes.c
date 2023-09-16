#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
int bytes, i;
unsigned char *opcode_ptr;

if (argc != 2)
{
printf("Error\n");
return (1);
}
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
return (2);
}
opcode_ptr = (unsigned char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02x\n", opcode_ptr[i]);
}
else
{
printf("%02x ", opcode_ptr[i]);
}
}
return (0);
}
