#include "main.h"
/**
 * times_table - check description
 * discription:It prints 9 times table starting with 0
 * Return: void
 */
void times_table(void)
{
	int b, c, d;

	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			d = b * c;

			if ((d / 10) == 0)
			{
				if (c != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (c == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
				if (c == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
