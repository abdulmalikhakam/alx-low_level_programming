#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int m = 0;

	if (!b)
		return (0);

	for (d = 0; b[d]; i++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		m = 2 * m + (b[d] - '0');
	}

	return (m);
}
