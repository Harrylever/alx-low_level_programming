#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints the alphabet, in lowercase,
 * followed by a new line'
 *
 * Return: Always (0)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
