#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

char *_strcpy(char *s)
{
char *copy;
int i;
for(i = 0; s[i] != '\0'; i++)
;
copy=malloc(i + 1);
if (copy == NULL)
{
free(copy);
return (NULL);
}
for(i = 0; s[i] != '\0'; i++)
copy[i] = s[i];
copy[i] = '\0';
return (copy);
}

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *neww_dog;
char *name_copy;
char *owner_copy;
name_copy = _strcpy(name);
owner_copy = _strcpy(owner);
neww_dog = malloc(sizeof(dog_t));
if (neww_dog == NULL)
{
free (neww_dog);
return (NULL);
}

neww_dog->name = name_copy;
neww_dog->age = age;
neww_dog->owner = owner_copy;

return (neww_dog);
}
