#include "main.h"
/**
 * *string_toupper - Converts all lower case letter to uppercase
 * @s: any string
 * Return: Uppercase letters
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}

