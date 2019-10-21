#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - function print dog
 *@d: pointer of struct dog
 *return : void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != '\0')
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
