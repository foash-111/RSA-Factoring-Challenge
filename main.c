#define _GNU_SOURCE
#include"monty.h"



/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	FILE *my_file = NULL;

if (argc != 2)
{
	perror("USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

	my_file = fopen(argv[1], "r");
	if (my_file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	enter_file(my_file);

	fclose(my_file);
	return (0);
}
