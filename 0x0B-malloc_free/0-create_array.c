#include <stdlib.h>
/**
 * create_array - character pointer function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
char *ch;
unsigned int i = 0;
if (size != 0)
ch = malloc(size * sizeof(char));
else
return (NULL);
if (ch == NULL)
return (NULL);
while (i < size)
{
ch[i] = c;
i += 1;
}
return (ch);
}

