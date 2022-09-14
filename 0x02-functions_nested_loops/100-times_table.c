#include "main.h"

/**
 * print_times_table - Print the time table of n
 *
 * Return: Always (0)
 */

void print_times_table(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		int j;

		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				printf("%d", j * i);
				printf("%s", ",");
			}
			else
			{
				printf("%4d", j * i);

				if (j == n)
				{
					printf("%s", "");
				}
				else
				{
					printf("%s", ",");
				}
			}
		}
		printf("\n");
	}
	printf("\n");
}
