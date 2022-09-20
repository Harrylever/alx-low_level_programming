#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - print reverse of string
 * @s: String variable
 * Return: void
 */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}

