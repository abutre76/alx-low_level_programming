#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and init it with a specific char
 * @size: size param
 * @c: the specific char
 * Return: the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrayOfChars = malloc(sizeof(char) * size);

	if (arrayOfChars == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arrayOfChars[i] = c;

	return (arrayOfChars);
}
