#include <stdio.h>
#include "main.h"

/**
 * main - pritns number of arguments
 * @argc: array size
 * @argv: array containing elements
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void)(argv);
	printf("%d\n", argc - 1);

	return (0);
}
