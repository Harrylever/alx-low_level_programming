#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	int i, next;
	long int new_result, x = 0, y = 1;

	for (i = 1; i <= 50; i++)
	{
		new_result = x + y;

		if (new_result < 4000000)
		{
			if (new_result % 2 == 0)
			{
				next += new_result;
			}
		}
		x = y;
		y = new_result;
	}
	printf("%d\n", next);
	return (0);
}
