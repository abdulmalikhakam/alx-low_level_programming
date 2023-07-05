#include "main.h"
#include <stdio.h>
/**
 * puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		puts_recursion(s + 1);
	}

	else
		putchar('\n');
}
