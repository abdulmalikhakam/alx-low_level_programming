#include <stdio.h>
/**
 * main - Entry point
 * discription:'printing lowercase alphabet and uppercase alphabet
 * Return: always 0
*/
int main(void)
{
	char l;
	char u;

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
