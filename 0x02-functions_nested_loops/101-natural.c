#include <stdio.h>

/**
 * main - computes and prints sum of all multiples of 3 or 5 bellow 1024,
 * followed by newline
 *
 * Return: 0;
 *
 */

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5) == 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
