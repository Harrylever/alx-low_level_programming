#include "main.h"

/**
 * *_memset - Function to fill a block of memory with a particular value
 * @ptr: any variable
 * @x: Value to be filled
 * @n: Number of bytes to be filled starting from ptr to be filled
 * Return: void
 */
char *_memset(char *ptr, char x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = x;
	}

	return (ptr);
}

