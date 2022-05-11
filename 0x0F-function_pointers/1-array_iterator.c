#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that recieves function pointer as parameter
 *@array: array input
 *@size: size of the array
 *@action: is a pointer to a certain function
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
unsigned int i = 0;
if (array != 0 && size >= 1 && action != 0)
while (i < size)
{
action(array[i]);
i++;
}
}
