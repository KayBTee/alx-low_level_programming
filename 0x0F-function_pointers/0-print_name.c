#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - the name of the function
 * @name: the name to be printed
 * @f: function pointer
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	char *current = name;

	if (name == NULL || f == NULL)
	{
		exit(EXIT_FAILURE);
	}

	while (*current != '\0')
	{
		f(current);
		current++;
	}
}
