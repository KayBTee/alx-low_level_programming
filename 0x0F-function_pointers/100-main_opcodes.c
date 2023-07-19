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
	int number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	int i;
	unsigned char *code = (unsigned char *)main;

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", code[i]);
	}

	printf("\n");

	return (0);
}
