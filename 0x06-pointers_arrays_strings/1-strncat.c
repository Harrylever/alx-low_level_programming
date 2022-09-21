#include "main.h"
/**
 * *_strncat - Concatenate two string together based on the n
 * integer allowed into the function
 * @dest: Destination of string
 * @src: Source to add to the destination string
 * @n: Integer of how many leter of src string are allowed
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
		{
			return (dest);
		}
		i++;
		j++;
	}

	return (dest);
}

