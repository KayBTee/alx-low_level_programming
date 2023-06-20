#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int j;
	int k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
