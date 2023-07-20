#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - the function that prints numbers
 * @separator: the string separator between the integer numbers
 * @n: the numbers being passed to the function
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list var;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, unsigned int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(var);

	printf("\n");
}
