#include "search_algos.h"

/**
 * binary_search - does a binary search on an array
 * returns index if found
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched
 * Return: index if value is found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i, left = 0, right = size - 1, mid;
	
	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", i);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		mid = (left + right) / 2;

		if (value == *(array + mid))
			return (mid);
		if (value < *(array + mid))
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
