#include "main.h"
#include <stdio.h>

/**
 * print_times_table - the function
 * @n: value for looping
 * Return: Always (0)
 */

void print_times_table(int n)
{
	int i;

	if (n >= 0 && n <= 15)
	{
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
	}
}
