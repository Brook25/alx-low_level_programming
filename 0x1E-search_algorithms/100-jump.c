#include "search_algos.h"

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
