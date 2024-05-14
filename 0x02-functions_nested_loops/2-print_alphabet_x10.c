#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int num_time;

	for (num_time = 1; num_time <= 10; num_time++)
	{
		char letter;

		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
