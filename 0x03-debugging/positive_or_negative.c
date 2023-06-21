#include "main.h"

/**
 * main - Entry point
 * print whether the number stored in the variable n is positive or negative
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)

		printf("%d is positive\n", i);

	else if (i < 0)

		printf("%d is negative\n", i);

	else

		printf("%d is zero\n", i);
}
