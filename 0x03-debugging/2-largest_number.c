#include "main.h"

/**
 * some_how - Returns the largest integer of a function
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 * Return: Largest Integer
 */

int some_how(int a, int b, int c)
{
	int largest;

	if (a == b)
	{
		if (a > c)
		{
			largest = a;
		}
		else
		{
			largest = c;
		}
	}
	if (a == c)
	{
		if (a > b)
		{
			largest = c;
		}
		else
		{
			largest = b;
		}
	}
	if (b == c)
	{
		if (b > a)
		{
			largest = b;
		}
		else
		{
			largest = a;
		}
	}
	return (largest);
}

/**
 * largest_number - Returns the largest integer of a function
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 * Return: Largest Integer
 */
int largest_number(int a, int b, int c)
{
	int largest = 0;

	if (a == b || a == c || b == c)
	{
		largest = some_how(a, b, c);
	}
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
