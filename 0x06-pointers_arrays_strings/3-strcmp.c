#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s1: String one
 * Return: i
 */
int _strlen(char *s1)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcmp - Compares two strings
 * @s1: String one
 * @s2: String two
 * Return: return -15 if first is not equal to second
 * return 15 if second is not equal to first
 * return 0 if both are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, x = 0, y = 1;


	i = _strlen(s1);

	j = _strlen(s2);

	if (i > j)
	{
		return (15);
	}
	else if (j > i)
	{
		return (-15);
	}

	if (i == j)
	{
		while ((s1[x] != '\0') && y == 1)
		{
			if (s1[x] == s2[x])
			{
				x++;
			}
			else
			{
				y = 0;
			}
		}
		if (y == 1)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}

	return (30);
}

