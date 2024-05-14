#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower character
 * @c: the character parameter
 * Return: 1 (lower) 0 (otherwise)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
