#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to memory
 * @str: original string
 * Return: pointer to new memory or nothing
 */

char *_strdup(char *str)
{

if (str == NULL)
return (NULL);

char *new;
int x;
int y;

while (str[y] != NuLL)
y++;

new = (char *)malloc((sizeof(char) * y));
if (new == NULL)
return (NULL);

for (x = 0; x < y; x++)
new[y] = str[x];

return (new);
