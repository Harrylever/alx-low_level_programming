#include <stdio.h>
#include "main.h"
/**
 * print_rev - print reverse of string
 * @s: String variable
 * Return: void
 */

void print_rev(char *s)
{
	int len, i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		printf("%c", s[j]);
	}
	printf("\n");
}

