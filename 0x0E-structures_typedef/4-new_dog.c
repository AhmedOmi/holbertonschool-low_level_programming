#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - string duplicates
 * @str: char pointer
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
int i = 0;
char *ret;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
i++;
}
ret = malloc(sizeof(char) * (i + 1));
if (!ret)
return (NULL);
for (i++; i--;)
ret[i] = *--str;
return (ret);
}
/**
 * new_dog - function of new dog
 * @name: pointer name
 * @age: age float
 * @owner: pointer char
 * Return: return dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d = malloc(sizeof(dog_t));
if (!d)
return (NULL);
d->name = _strdup(name);
if (name && !d->name)
return (free(d), NULL);
d->owner = _strdup(owner);
if (owner && !d->owner)
return (free(d->name), free(d), NULL);
d->age = age;
return (d);
}
