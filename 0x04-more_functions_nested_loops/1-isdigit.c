#include "main.h"

/**
 * _isdigit - check if numbers fall between 0 - 9
 * @c: characters that are to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
