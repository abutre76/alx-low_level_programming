#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the charcter param
 * Return: 0 (true) 1 (false)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
