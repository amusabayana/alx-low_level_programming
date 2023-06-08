#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		x = a[y];
		a[x] = a[n];
		a[n] = y;
	}
}
