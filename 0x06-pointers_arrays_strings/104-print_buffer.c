#include "main.h"
#include <stdio.h>

/**
 *print_buffer - Print 10 bytes per line.
 *@b: address of buffer
 *@size: Number of characters to be printed.
 */
void print_buffer(char *b, int size)
{
	int k, l, j;

	if (size <= 0)
		printf("\n");
	else
	{
		for (k = 0; k < size; k += 10)
		{
			printf("%.8x:", k);
			for (l = k; l < k + 10; l++)
			{
				if (l % 2 == 0)
					printf(" ");
				if (l < size)
					printf("%.2x", *(b + l));
				else
					printf("  ");
			}
			printf(" ");
			for (j = k; j < k + 10; j++)
			{
				if (j >= size)
					break;
				if (*(b + j) < 32 || *(b + j) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + j));
			}
			printf("\n");
		}
	}
}
