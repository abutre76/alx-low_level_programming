#include <stdio.h>

/**
 * main - By considering the terms in the Fibonacci sequence whose values do
 * not exceed 4,000,000, write a program that finds and prints the sum of
 * the even-valued terms, followed by a new line.
 * Return: 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
