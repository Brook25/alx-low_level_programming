#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: array
 * @height: array
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int **ch;
int i, j, k, l;
i = j = k = l = 0;
if (width <= 0 || height <= 0)
return (NULL);
ch = malloc(height * sizeof(int *));
if (ch == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
ch[i] = malloc(width * sizeof(int));
if (ch[i] == NULL)
{
for (l = 0; l < i; l++)
free(ch[l]);
free(ch);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
ch[j][k] = 0;
}
return (ch);
}
