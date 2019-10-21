#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *init_dog - function to init the struct dog
 *@d: pointer of struct dog
 *@name: char pointer
 *@age: flaot
 *@owner: pointer char
 *return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if(d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
