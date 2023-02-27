#include <stdio.h>
/**
* swap_int - swaps the values of two integers
 * @a: integer 1 to swap
 * @b: integer 2 to swap
 */

void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
