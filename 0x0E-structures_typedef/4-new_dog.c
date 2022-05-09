#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - returns pointer to an allocated space in memory
 * that contains copy of the string parameter.
 * @str: input string
 * Return: character pointer
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int a = 0;
	unsigned int b = 0;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a += 1;
	a += 1;
	s = malloc(a * sizeof(*s));
	if (s == NULL)
		return (NULL);
	while (b < a)
	{
		s[b] = str[b];
		b += 1;
	}
	return (s);
}

/**
 *new_dog - function creates new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner
 *Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	return (new_dog);
}
