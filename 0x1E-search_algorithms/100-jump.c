#include "search_algos.h"

/**
 * jump_search - does a jump search on an array to find
 * a given value
 * @array: array to do the search on
 * @size: size of the array
 * @value: value to find the index of
 * Return: index of the value or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t start = 0, end;

	if (!array)
		return (-1);

	while (start < size && array[start] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start += jump;
	}
	
	end = start;
	start -= jump;
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	while (start < size && start <= end)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start += 1;
	}

	return (-1);
}
