#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointed memory to be filled
 * @b: the value to fill with
 * @n: the number of bytes
 * Return: the pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mem = s, value = b;

	for (i = 0; i < n; i++)
	{
		mem[i] = value;
	}

	return (mem);
}
