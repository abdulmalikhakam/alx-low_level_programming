#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print 0 up to 9
 * return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
