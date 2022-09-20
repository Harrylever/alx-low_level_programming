#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 * then a new line
 * @str: string to print the chars from
 * Return: void
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

