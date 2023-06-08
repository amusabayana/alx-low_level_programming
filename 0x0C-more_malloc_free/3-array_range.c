#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of ints
 * @min: minimum range
 * @max: maximum range of values stored
 * Return: the pointer to the new array
 */

int *array_range(int min, int max)
{
int *xyz;
int hold;
int size;

if (min > max)
return (NULL);

size = max - min + 1;
xyz = malloc(sizeof(int) * size);

if (xyz == NULL)
return (NULL);

for (hold = 0; min <= max; hold++)
xyz[hold] = min++;

return (xyz);

}
