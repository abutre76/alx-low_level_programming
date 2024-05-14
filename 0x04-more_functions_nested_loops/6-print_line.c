#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the length param
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int count = 0;

		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
