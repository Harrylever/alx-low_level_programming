#include "main.h"

/**
 * largest_number - Returns the largest integer of a function
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 * Return: Largest Integer
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	return (largest);
}

