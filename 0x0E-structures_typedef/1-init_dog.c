#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - adds value to the labels
 * @d: pointer to struct dog from ote
 * @name: name to add
 * @age: age to add
 * @owner: owner name to add
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
