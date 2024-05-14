#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Strint param
 * Return: void
 */

void puts2(char *str)
{
	int index = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;

	while (index <= len - 1)
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
