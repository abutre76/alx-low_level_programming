#include "main.h"

/**
 * _isdigit - checks for a digit (0-9)
 * @c: character param
 * Return: 1 if true or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
