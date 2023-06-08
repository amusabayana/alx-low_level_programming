#include "main.h"

/**
 * _pow_recursion - sum  of x raised to the power of y
 * @x: initial value to raise
 * @y: power of
 * Return: result of the maths
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
return (x * _pow_recursion(x, y - 1));
}
