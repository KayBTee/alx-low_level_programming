#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed
 * @argc: array size
 * @argv: array containig elements
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}

	return (0);
}
