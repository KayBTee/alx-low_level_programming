#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that takes three arguments
 * @array: a pointer to the integer array
 * @size: the number of elements in the array
 * @action: function ptr that represents the operation to be performed
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
