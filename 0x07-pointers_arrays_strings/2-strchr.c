#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string param
 * @c: the character to locate
 * Return: the first occurence of the character or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
