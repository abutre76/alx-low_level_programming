#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: the character parameter
 * Return: 1 if true and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
