#include "main.h"

/**
 * factorial - returns the factorial
 * @n: input factorial number
 * Return: the factorial result of' n'
 */


int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
