#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointing at variable being filled
 * @b: character to copy
 * @n: number of times to copy b
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
