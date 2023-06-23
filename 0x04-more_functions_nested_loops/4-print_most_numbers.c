#include "main.h"
/**
 * print_most_numbers - print the numbers  0 up to 9
 * discription -print numbers excluding 2 and 4
 * return - the numbers 0 up to 9
*/
void print_most_numbers(void)
{
	int y = 0;

	for (; y <= 9; y++)
	{
	if (y == 2 || y == 4)
	{
	continue;
	}
	else
	{
	_putchar(y + '0');
	}
	}
	_putchar('\n');
}
