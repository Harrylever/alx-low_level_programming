#include <stdio.h>
#include <unistd.h>
#include <string.h>
/*
 * main - Entry point
 *
 * Description: ''
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, str, strlen(str));
	return (1);
}