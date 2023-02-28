#include "main.h"
/**
* print_array - a function that prints n elements of an array
* @a: declared name for thearray
* @n: is the number of elements OF the array to be printed
* Return: a & n
*/
void print_array(int *a, int n)
{
int x;
for (x = 0; x < (n - 1); x++)
{
printf("%d, ", a[x]);
}
if (x == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
