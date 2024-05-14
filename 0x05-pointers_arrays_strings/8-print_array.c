#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: Array param
 * @n: Array size param
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n - 1)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
