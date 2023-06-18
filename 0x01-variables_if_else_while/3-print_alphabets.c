#include <stdio.h>
/**
 * main - Entry point
 * discription: 'lower and upper alphabet
 * Return: always 0
*/
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);

	for (lower = 'A'; lower <= 'Z'; lower++)
	putchar(lower);
	putchar('\n');
	return (0);
}
