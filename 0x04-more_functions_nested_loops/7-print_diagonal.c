#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * if @n is 0 or less, the function should print \n only
 * @n: the number of time to print the character \
 * Return: void
 */

void print_diagonal(int n)
{
	int length, space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
				_putchar(' ');
			_putchar('\\');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
