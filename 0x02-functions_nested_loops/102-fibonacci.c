#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;
	long int new_result, x = 0, y = 1;

	for (i = 1; i <= 50; i++)
	{
		new_result = x + y;
		if (i == 50)
		{
			printf("%ld", new_result);
		}
		else
		{
			printf("%ld, ", new_result);
		}
		x = y;
		y = new_result;
	}
	printf("\n");
	return (0);
}
