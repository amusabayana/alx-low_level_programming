#include <stdio.h>
/**
 * _strlen_recursion - main function
 * @s: the string measured
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
int length;
if (*s)
{
	length++;
	length += _strlen_recursion(s + 1);
}
return (length);
}
