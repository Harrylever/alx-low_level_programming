#include "main.h"
#include <stdio.h>
/**
 * reverse_array - returns the reverse of an array
 * of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: reversed array 
 */

void reverse_array(int *a, int n)
{
    int i;

    i = n - 1;
    while (i >= 0)
    {
        printf("%d", a[i]);
        if (i != 0)
        {
            printf(", ");
        }
        i--;
    }
    printf("\n");
}

