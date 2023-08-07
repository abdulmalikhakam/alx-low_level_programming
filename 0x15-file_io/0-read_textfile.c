#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: y- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *o;
	ssize_t f;
	ssize_t y;
	ssize_t u;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	o = malloc(sizeof(char) * letters);
	u = read(f, o, letters);
	y = write(STDOUT_FILENO, o, u);

	free(o);
	close(f);
	return (w);
}
