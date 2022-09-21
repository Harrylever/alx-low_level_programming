#include "main.h"
/**
 * *_strcat - Concatenate two string
 * @dest: String one
 * @src: String two
 * Return: full string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

