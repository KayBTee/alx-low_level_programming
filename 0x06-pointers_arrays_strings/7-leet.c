#include "main.h"
#include <string.h>

/**
 * *leet - encodes a string into 1337.
 * @str: character being checked
 * Return: char
 */

char *leet(char *str)
{
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphaArr[j] != '\0'; j++)
		{
			if (str[i] == alphaArr[j])
			{
				str[i] = alphaArr[j + 1];
				break;
			}
		}
	}
	return (str);
}
