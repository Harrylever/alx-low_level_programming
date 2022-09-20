#include <stdio.h>
#include "main.h"
/**
 * _puts - Returns string
 * @str: string being returned
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
}

