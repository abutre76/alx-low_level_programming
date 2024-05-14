#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line
 * @size: The triangle dimentions param
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int height, base;

		for (height = 1; height <= size; height++)
		{
			for (base = size - height; base > 0; base--)
				_putchar(' ');
			for (base = 0; base < height; base++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
