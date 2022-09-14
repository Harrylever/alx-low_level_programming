#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'prints out all the letters to the screen ten times'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
