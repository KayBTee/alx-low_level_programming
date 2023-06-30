#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer being checked
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int m;

		if (n < 0)
		{
			m = -n;
			_putchar('-');
		}
		else
		{
			m = n;
		}
	if (m / 10)
		print_number(m / 10);

	_putchar((m % 10) + '0');
}
