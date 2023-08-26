#include "search_algos.h"

/**
 * linear_search - does a linear search on an array to find
 * the index of a given value
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: value to be find
 * Return: index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (;i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}

	return (-1);
}
