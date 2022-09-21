#include "main.h"
/**
 * *cap_string - Capitalize each words in a string
 * @s: String to be capitalize
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0)
		{
			if (s[0] >= 'a' && s[0] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}

		if ((s[i] == '\n') || (s[i] == ' ') || (s[i] == '\t'))
		{
			if (i != 0)
			{
				i++;
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
			}
		}
		i++;
	}
	return (s);
}

