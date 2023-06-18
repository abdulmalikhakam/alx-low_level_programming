#include <stdio.h>
/**
 * main -Entry point
 * discription:'prints all possible different combinations of two digits
 * Return: always 0
*/
int main(void)
{
	int q, e;

	for (q = 48; q <= 56; q++)
	{
		for (e = 49; e <= 57; e++)
		{
			if (e > q)
			{
				putchar(q);
				putchar(e);
				if (q != 56 || e != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
