#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: input char
 * Return: char
 */

char *_strcpy(char *s)
{
char *copy;
int i;
for(i = 0; s[i] != '\0'; i++)
;
copy = malloc(i+1);
if (copy == NULL)
{
free(copy);
return (NULL);
}
for (i = 0; s[i] != '\0'; i++)
copy[i] = s[i];
copy[i] = '\0';
return (copy);
}

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *neww_dog;

neww_dog = malloc(sizeof(dog_t));
if (neww_dog == NULL)
{
free (neww_dog);
return (NULL);
}
neww_dog->name = _strcpy(name);
if (neww_dog->name == NULL)
{
free(neww_dog);
return (NULL);
}
neww_dog->age = age;
neww_dog->owner = _strcpy(owner);
if (neww_dog->owner == NULL)
{
free(neww_dog);
free(neww_dog->name);
return (NULL);
}
return (neww_dog);
}

