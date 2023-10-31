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
	int m;
	ssize_t q, s;
	char *buf;

	if (!filename)
		return (0);

	m = open(filename, O_RDONLY);

	if (m == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	q = read(m, buf, letters);
	s = write(STDOUT_FILENO, buf, q);

	close(m);

	free(buf);

	return (s);
}
