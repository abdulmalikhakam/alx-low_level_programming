#include <stdio.h>
/**
 * main - Entry point
 * discription:'prints all possible combinations of two two-digit numbers'
 * Return: always 0
*/
int main(void)
{int p, l;

	for (l = 0; l < 100; l++)
	{
		for (p = 0; p < 100; p++)
		{
			if (p < l)
			{
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);
				putchar(' ');
				putchar((l / 10) + 48);
				putchar((p % 10) + 48);
				if (p != 98 || l != 99)
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


