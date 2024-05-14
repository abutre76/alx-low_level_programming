#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: the string param
 * Return: void
 */

void _puts(char *str)
{
	int pos = 0;

	while (str[pos] != '\0')
	{
		_putchar(str[pos]);
		pos++;
	}
	_putchar('\n');
}
