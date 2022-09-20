#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int n, i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	n = (i + 1) / 2;

	for (i = n; str[i]; i++)
	{
		printf(str[i]);
	}
	printf('\n');
}

