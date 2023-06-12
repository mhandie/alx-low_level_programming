#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file
 * @letters: number of letters
 * Return: w- actual number of bytes
 * 0 function fails or is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *av;
ssize_t d;
ssize_t w;
ssize_t t;
d = open(filename, O_RDONLY);
if (d == -1)
return (0);
av = malloc(sizeof(char) * letters);
t = read(d, av, letters);
w = write(STDOUT_FILENO, av, t);
free(av);
close(d);
return (w);
}
