#include "main.h"
/**
* main - Entry point
*discription:'print if 'i' is positive_or_negative
@paremeter: if 'i' is zero
* Return: always 0
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
		printf("%d is zero\n", i);
}

