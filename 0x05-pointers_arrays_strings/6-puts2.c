#include "main.h"
#include <stdio.h>
/**
 * puts2 - print character every of other string
 * @str: the string to be treated
 * Return: void
*/
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; 1 +=2)
	{
	putchar(str[i]);
	}
	putchar('\n');
}
