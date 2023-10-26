#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c, t = 0;
	unsigned long int am;
	unsigned long int ve = n ^ m;

	for (c = 63; c >= 0; c--)
	{
		am = ve >> c;
		if (am & 1)
			countbit++;
	}

	return (countbit);
}
