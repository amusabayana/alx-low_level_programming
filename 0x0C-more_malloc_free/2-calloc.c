#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a byte
 * @s: memory to be filled
 * @b: character to copy
 * @n: number of times b is copied
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}

return (s);

}
/**
 * *_calloc - allocates memory for the array
 * @nmemb: elements in the array
 * @size:  element size
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *aaa;
if (nmemb == 0 || size == 0)
return (NULL);
	aaa = malloc(size * nmemb);

	if (aaa == NULL)
	return (NULL);

	_memset(aaa, 0, nmemb * size);

	return (aaa);
}
