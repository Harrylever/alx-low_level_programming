#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	int i, new_result, x = 0, y = 1;

	for (i = 1; i <= 50; i++)
	{
		new_result = x + y;
		printf("%d\n", new_result);
		x = y;
		y = new_result;
	}
	return (0);
}
