#include "main.h"

/**
 * _puts_recursion - prints a string, followed by new line.
 * @s: pointer to string param
 * Return: Nothing;
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
