#include "main.h"

/**
 * more_numbers - prints x10 the numbers 0 to 14, followed by newline
 * Return: void
 */

void more_numbers(void)
{
	int count, num;

	count = 1;
	while (count <= 10)
	{
		num = 0;
		while (num < 15)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			num++;
		}
		count++;
		_putchar('\n');
	}
}
