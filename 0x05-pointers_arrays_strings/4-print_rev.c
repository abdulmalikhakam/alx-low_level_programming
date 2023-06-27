#include "main.h"
/**
 * print_rev - print a string in a reverse
 * @s: string to print
 * Return : void
*/
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
	r++;
	}

	for (r -= 1; r >= 0; r--)
	{
	putchar(s[r]);
	}
	putchar('\n');
}
