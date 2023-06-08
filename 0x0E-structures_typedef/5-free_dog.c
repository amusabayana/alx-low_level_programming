#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees struct dog memory
* @d: elements of struct dog to gree
*/

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
}
}
