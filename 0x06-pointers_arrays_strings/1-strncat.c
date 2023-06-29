#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string being appended
 * @src: string being appended to
 * @n: integer being used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)

	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';

	return (dest);
}
