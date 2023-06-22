#include "main.h"
/**
 * print_numbers - print 0-9
 * return: void
 */
void print_numbers(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
