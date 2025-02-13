#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: the number param
 * Return: 1 (positive) 0 (netral) -1 (negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
