#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c:The character to be checked
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)

{
	char c;

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
