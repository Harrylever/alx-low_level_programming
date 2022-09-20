#include <stdio.h>
#include "main.h"
/**
 * swap_int - Swap the values of two integers
 * @a: integer A
 * @b: integer B
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int var_b;

	var_b = *a;

	*a = *b;
	*b = var_b;
}

