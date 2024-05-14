#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 * Numbers must be separated by \',\', followed by a space
 * The three digits must be different 012, 120, 102, 021, 201, 210 are
 * considered the same combination of the three digits 0, 1 and 2
 *  Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Always 0
 */

int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1 % 10 + '0');
					putchar(num2 % 10 + '0');
					putchar(num3 % 10 + '0');
					if (num1 == 7 && num2 == 8 && num3 == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
