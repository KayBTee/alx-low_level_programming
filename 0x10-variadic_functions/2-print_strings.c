#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - the function that prints the strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strs, char *);

		if (str != NULL)
		{
			printf("%s", str);

			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("nil");

			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(strs);

	printf("\n");
}
