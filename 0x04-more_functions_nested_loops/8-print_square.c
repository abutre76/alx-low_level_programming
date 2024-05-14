#include "main.h"

/**
 * print_square - prints a square, followed by new line
 * if the @size 0 or less, print only a new line
 * @size: the square size param
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int height, width;

		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
