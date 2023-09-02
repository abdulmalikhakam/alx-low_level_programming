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
	int w, e = 0;
	unsigned long int A;
	unsigned long int x = n ^ m;

	for (w = 63; w >= 0; w--)
	{
		A = x >> w;
		if (A & 1)
			e++;
	}

	return (e);
}

