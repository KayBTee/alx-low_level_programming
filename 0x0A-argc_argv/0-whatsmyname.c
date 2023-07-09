#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: array size
 * @argv: array containing elements
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	puts(argv[argc - 1]);
	return (0);
}
