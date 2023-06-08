#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: the pointer to memory
 */

void *malloc_checked(unsigned int b)
{

void *xyz;
xyz = malloc(b);
if (xyz == NULL)
exit(98);

return (xyz);

}
