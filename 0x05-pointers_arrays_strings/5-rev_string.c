#include "main.h"
/**
 * print_rev - print a string in a reverse
 * @s: string to bbe modified
 * Return : void
*/
void print_rev(char *s)
{
	int len = 0, index = 0;
	char temp;

	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	temp = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = temp;
	}
}
