#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 *
 * @argc: count of args
 * @argv: array of args
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int a, size;
	char *add;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	add = (char *)main;
	for (a = 0; a < size - 1; a++)
		printf("%02hhx ", add[a]);
	printf("%02hhx\n", add[a]);
	return (0);
}
