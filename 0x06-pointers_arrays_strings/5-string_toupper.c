#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @up: character being checked
 * Return: up
 */

char *string_toupper(char *up)
{
	int j;

	for (j = 0; up[j] != '\0'; j++)
	{
		if (up[j] >= 'a' && up[j] <= 'z')
		{
			up[j] = up[j] - 32;
		}
	}
	return (up);
}
