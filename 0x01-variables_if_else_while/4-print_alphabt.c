#include <stdio.h>
/**
 * main - Entry point
 * description:'print alphabets but q and e not included'
 * Return: always 0
*/
int main(void)
{
	char alpha;

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
			alpha++;
	}

	putchar('\n');
	return (0);
}
