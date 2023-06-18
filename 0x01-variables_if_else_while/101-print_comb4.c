#include <stdio.h>
/**
 * main - Entry point
 * discription:'prints all possible different combinations of three digits'
 * Return: always 0
*/
int main(void)
{
	int b, c, l;

	for (b = 48; b < 58; b++)
	{
		for (c = 49; c < 58; c++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > c && c > b)
				{
					putchar(b);
					putchar(c);
					putchar(l);
					if (b != 55 || c != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
