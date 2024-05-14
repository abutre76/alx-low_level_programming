#include "main.h"

/**
 * _strncat - Concatenates two strings. it will use at most n bytes from src;
 * and src does not need to be null-terminated if it contains n or more bytes
 * @dest: Destination param
 * @src: Source param
 * @n: n bytes
 * Return: Pointer to the start of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	*dest = '\0';
	return (start);
}
