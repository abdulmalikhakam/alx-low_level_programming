#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int v;

	for (i = 0; i < 8; i++)
	{
		for (v = 0; v < 8; v++)
			_putchar(a[i][v]);
		_putchar('\n');
	}
}
