#include <stdio.h>

/**
 * main -	printfs all possible combinations of two digits
 *		-numbers must be separeted by '\,' (comma)
 *		-01 and 10 are considered the same comb of 0 and 1
 *		-numbers should be printed in asc order, with two digits
 *		-use putchar only and five times at max
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;

	/*
	 * Write a nested loop to print two sided digits were
	 * the first digit must be different from the second one
	 * and the first digit must also be lesser than the second one
	 * so to avoid printing repeated comb like (00..11) and (01..10)
	 */
	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 % 10 + '0');
				putchar(num2 % 10 + '0');
				if (num1 == 8 && num2 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
