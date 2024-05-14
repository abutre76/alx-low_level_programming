#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to split
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, index;

	while (str[len] != '\0')
		len++;

	if ((len % 2) != 0)
		index = (len + 1) / 2;
	else
		index = len / 2;

	while (index < len)
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
