#include "main.h"

/**
 * puts2 - print only one character out of two
 * @str: input
 */

void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		length++;
	}
	i = length - 1;
	for (k = 0; k <= i; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
