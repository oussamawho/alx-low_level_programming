#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void print_header_info(Elf64_Ehdr *header);

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s <ELF_file>\n", argv[0]);
return (1);
}

int fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error");
return (1);
}

Elf64_Ehdr header;
if (read(fd, &header, sizeof(Elf64_Ehdr)) == -1)
{
perror("Error");
close(fd);
return (1);
}
print_header_info(&header);
close(fd);

return (0);
}

void print_header_info(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf(" Magic: %02x %02x %02x %02x\n",
header->e_ident[EI_MAG0],
header->e_ident[EI_MAG1],
header->e_ident[EI_MAG2],
header->e_ident[EI_MAG3]);
printf(" Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf(" Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf(" Version: %d (current)\n", header->e_ident[EI_VERSION]);
printf(" OS/ABI: %s\n",
header->e_ident[EI_OSABI] == ELFOSABI_NONE ? "UNIX - System V" :
header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "UNIX - HP-UX" :
header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" :
header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" :
header->e_ident[EI_OSABI] == ELFOSABI_IRIX ? "UNIX - IRIX" :
header->e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "UNIX - FreeBSD" :
header->e_ident[EI_OSABI] == ELFOSABI_TRU64 ? "UNIX - TRU64" :
header->e_ident[EI_OSABI] == ELFOSABI_ARM ? "ARM" :
header->e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Standalone App" :
"Unknown");
printf(" ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

printf(" Type: ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("Unknown: %x\n", header->e_type);
}
printf(" Entry point address: %#lx\n", (unsigned long)header->e_entry);
}
