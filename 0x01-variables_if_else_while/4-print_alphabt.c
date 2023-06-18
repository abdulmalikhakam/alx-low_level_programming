#include <stdio.h>
/**
 * main - Entry point
 * discription:'print lower alphabets q and e not included';
 * Return: always 0
*/
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
		for (lower != 'q' && lower != 'e'; lower++;)
			putchar(lower);
	putchar('\n');
	return (0);
}
