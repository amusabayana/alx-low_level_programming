#include "main.h"
/**
 * _strcmp - compare the string values
 * @s1:  value 1
 * @s2:  value 2
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}

