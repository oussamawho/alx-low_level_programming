#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and write to STDOUT
 * @filename: The name of the text file
 * @letters: The number of letters to read and write
 * Return: The actual number of bytes written to STDOUT
 *         0 when the function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd, r, w;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}

r = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, r);

free(buf);
close(fd);

return (w);
}
