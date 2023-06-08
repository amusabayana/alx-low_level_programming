#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *xyz;
	int i = 0;
	int y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	xyz = malloc(sizeof(char) * (x + 1));

	if (xyz == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
	xyz[y] = str[y];

	return (xyz);
}