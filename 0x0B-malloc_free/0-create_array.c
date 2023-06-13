#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - createss an array of chars
* @size: size of thhe array
* @c: given characters to assign
* Description: creates an array of chars and asssigns c
* Return: pointer if successful, NUll if fail
*
*/

char *create_array(unsigned int size, char c)
{
char *array1;
unsigned int y;

array1 = malloc(sizeof(char) * size);
if (size == 0 || array1 == NULL)
return (NULL);

for (y = 0; y < size; y++)
{
array1[y] = c;
return (array1);
}
}
