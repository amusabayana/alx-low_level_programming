#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _print_rev_recursion - print given  string in reverse
 * @s - string to be printted
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

