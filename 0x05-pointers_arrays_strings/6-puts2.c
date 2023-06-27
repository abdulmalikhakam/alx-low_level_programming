#include "main.h"
/**
 * puts2 - print character every of other string
 * @str: the string to be treated
 * Return: void
*/
void puts2(char *str)
{
	int p;
	int i = 0;

	while (str[i] != '\0')
	{
	i++;
	}

	for (p = 0; p < i; +2)
	{
	putchar(str[p]);
	}
	putchar('\n');
}
