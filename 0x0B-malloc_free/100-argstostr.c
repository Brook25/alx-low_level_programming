#include <stdlib.h>
/**
 * argstostr - concatenates arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
char *ch, *str;
	int i, j, count;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			count++;
		}
		count++;
	}
	count += 1;
	ch = malloc(count * sizeof(char));
	if (ch == NULL)
		return (NULL);
	str = ch;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*ch = av[i][j];
			j++;
			ch++;
		}
		*ch = '\n';
		ch++;
	}
	return (str);
}
