#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array and assign char c
 * @size: array size
 * @c: char to assign
 * Return: pointer to array and NULL if it fail
 */

char *create_array(unsigned int size, char c)
{
	char *aa;
	unsigned int x;

	aa = malloc(sizeof(char) * size);
	if (size == 0 || aa == NULL)
	return (NULL);

	for (x = 0; x < size; x++)
	aa[x] = c;
	return (aa);
}

