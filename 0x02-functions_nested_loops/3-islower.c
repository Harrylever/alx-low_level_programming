#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: Check * Return: 1 if c is lowercase, 0 otherwise
 * @c: Character to be evaluated
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
