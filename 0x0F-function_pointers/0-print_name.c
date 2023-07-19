#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - the name of the function
 * @name: the name to be printed
 * @f: function pointer
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
