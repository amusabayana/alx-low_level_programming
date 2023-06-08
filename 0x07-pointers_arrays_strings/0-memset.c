#include "main.h"
/**
 * _memset - fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: given value
 * @n: number of bytes to be converted
 *
 * Return: the new array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
