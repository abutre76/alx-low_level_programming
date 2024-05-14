#include "main.h"

/**
 * _memcpy - copies memory are
 * @dest: destination param
 * @src: source param
 * @n: size
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
