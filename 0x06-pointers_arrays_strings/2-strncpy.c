#include "main.h"
/**
 * *_strncpy - Copy a string
 * @dest: Destination string
 * @src: Soruce string
 * @n: integer of how many times char is added
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

