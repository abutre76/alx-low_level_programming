#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: the given number parameter
 *
 * Return: void
 */

void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			printf("%d", num);
			if (num == 98)
				continue;
			printf(", ");

		}
	} else
	{
		for (num = n; num >= 98; num--)
		{
			printf("%d", num);
			if (num == 98)
				continue;
			printf(", ");
		}
	}
	printf("\n");
}
