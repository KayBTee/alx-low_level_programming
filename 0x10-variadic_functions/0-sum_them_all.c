#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all the parameters
 * @n: number of integers being added together
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
