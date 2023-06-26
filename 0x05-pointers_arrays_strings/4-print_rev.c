#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s:string being reversed
 */

void print_rev(char *s)
{
	if (*s != '\0')
	{
	print_rev(s + 1);
	_putchar(*s);
	}
	else _putchar('\n');
}
