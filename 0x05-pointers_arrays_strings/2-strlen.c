#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to be returned
 * Return: string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
