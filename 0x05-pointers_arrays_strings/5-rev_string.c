#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s:character being reversed
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
