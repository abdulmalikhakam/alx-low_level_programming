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
	int i, d = 0;
	unsigned long int t;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		t = x >> i;
		if (t & 1)
			d++;
	}

	return (d);
}
