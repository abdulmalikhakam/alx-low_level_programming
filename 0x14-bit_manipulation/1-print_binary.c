#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int v, p = 0;
	unsigned long int u;

	for (v = 63; v >= 0; v--)
	{
		u = n >> v;

		if (u & 1)
		{
			_putchar('1');
			p++;
		}
		else if (p)
			_putchar('0');
	}
	if (!p)
		_putchar('0');
}
