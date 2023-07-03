#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: the striing to be checked
 * @c: character to be located
 * Return: if c is found, a pointer
 * if c is not found, NULL
 */

char *_strchr(char *s, char c)
{
	int str;

	for (str = 0; s[str] >= '\0'; str++)
	{
		if (s[str] == c)
			return (s + str);
	}
	return ('\0');
}
