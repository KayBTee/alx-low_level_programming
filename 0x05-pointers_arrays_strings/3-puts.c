#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: character being checked
 * Return: Always 0
 */

void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
