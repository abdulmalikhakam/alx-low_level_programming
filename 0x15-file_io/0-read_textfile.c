#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: v- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *u;
	ssize_t f;
	ssize_t v;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	u = malloc(sizeof(char) * letters);
	t = read(f, u, letters);
	v = write(STDOUT_FILENO, u, t);

	free(u);
	close(f);
	return (v);
}

