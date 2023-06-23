#include "main.h"
/**
 * print_most_numbers - print num except 2 and 4
 * main - Entry point
 * return: void
 */
void print_most_numbers(void)
{
	char r;

	for (r = '0'; r <= '9'; r++)
	{
		if (r != '2' || r != '4')
			_putchar(r);
	}
	_putchar('\n');
}
