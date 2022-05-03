#include <stdlib.h>
/**
 * argstostr - concatenates arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *ar, *str;
	int i, j, cont;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			cont++;
		}
		cont++;
	}
	cont += 1;
	ar = malloc(cont * sizeof(char));
	if (ar == NULL)
		return (NULL);
	str = ar;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*ar = av[i][j];
			j++;
			ar++;
		}
		*ar = '\n';
		ar++;
	}
	return (str);
}
