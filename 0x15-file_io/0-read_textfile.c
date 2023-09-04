#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *z;
	ssize_t e;
	ssize_t y;
	ssize_t v;

	e = open(filename, O_RDONLY);
	if (e == -1)
		return (0);
	z = malloc(sizeof(char) * letters);
	v = read(e, z, letters);
	y = write(STDOUT_FILENO, z, v);

	free(z);
	close(e);
	return (y);
}
