#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int md;
	ssize_t nd, wr;
	char *buf;

	if (!filename)
		return (0);

	md = open(filename, O_RDONLY);

	if (md == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nd = read(md, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nd);

	close(md);

	free(buf);

	return (wr);
}
