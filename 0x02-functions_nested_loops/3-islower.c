#include "main.h"
/**
 * main- Entry point
 *
 * Description: Check * Return: 1 if c is lowercase, 0 otherwise
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
