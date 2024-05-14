#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination param
 * @src: Source param
 * @n: Number param
 * Return: start of the string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (start);
}
