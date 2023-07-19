#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main entry
 * @argc: variable being used
 * @argv: pointer being used
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, bytes;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	x = 0;
	while (x < bytes - 1)
	{
		printf("%02hhx ", array[x]);
		x++;
	}
	printf("%02hhx\n", array[x]);
	return (0);
}
