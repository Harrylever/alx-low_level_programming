#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int j, i, x;

	i = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		x = a[j];
		a[j] = a[i];
		a[i--] = x;
	}
}

