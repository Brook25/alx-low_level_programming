#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: argunment vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int count, n, num2, res;

	count = n = num2 = res = 0;
	if (argc > 0)
	{
		while (count < argc)
		{
			if (argc == 3)
			{
				if (count == 1)
					n = atoi(argv[count]);
				else if (count == 2)
					num2 = atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			res = (n * num2);
			count++;
		}
		printf("%d\n", res);
	}
	return (0);
}
