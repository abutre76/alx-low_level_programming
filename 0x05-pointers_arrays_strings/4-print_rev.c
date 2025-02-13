#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by new line
 * @s: the string to be reverse printed
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[len] != '\0')
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
