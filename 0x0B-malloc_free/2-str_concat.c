#include "main.h"
#include <stdlib.h>

/*
 * str_concat - gets inputs and add together for the size
 * str_concat - entry point
 * @s1: first input to concat
 * @s2:second input  to concat
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

int x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	conct = malloc(sizeof(char) * (x + y + 1));

	if (conct == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		conct[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		conct[x] = s2[y];
		x++;
		y++;
	}
	conct[x] = '\0';
	return (conct);
}

