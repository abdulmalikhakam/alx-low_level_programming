#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half of the string
 * @str: the string to print
 * return: void
*/
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
	j++;
	}

	if (j % 2 == 1)
	{
	k  = (j - 1) / 2;
	k += 1;
	}

	for (; k < j; k++)
	{
	putchar(str[k]);
	}
	putchar('\n');
}
