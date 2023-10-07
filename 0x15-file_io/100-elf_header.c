#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


static uint8_t elf_magic[] = {0x7f, 'E', 'L', 'F'};

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
return (1);
}

FILE *file = fopen(argv[1], "rb");
if (file == NULL)
{
perror("Error opening file");
return (2);
}

uint8_t header[4];
fread(header, sizeof(uint8_t), 4, file);

if (memcmp(header, elf_magic, sizeof(elf_magic)) == 0)
{
printf("ELF Magic Numbers: ");
for (int i = 0; i < 4; i++)
{
printf("%02x ", header[i]);
}
printf("\nThis is an ELF file.\n");
}
else
{
printf("This is not an ELF file.\n");
}
fclose(file);
return (0);
}
