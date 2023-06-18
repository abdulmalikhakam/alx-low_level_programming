#include <stdio.h>
/**
 * main - Entry point
 * discription:'prints all possible combinations of single-digit numbers
 * Return: always 0
*/
int main(void)
{
	int g;

	for (g = 48; g < 58; g++)
	{
		putchar(g);
		if (g != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
