#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as parameter
 * @str: the string iven as parameter
 * Return: pointer to a newly allocated memory
 */

char *_strdup(char *str)
{
	char *dup;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * len + 1);

	if (dup == NULL)
		return (NULL);

	for (index = 0; index <= len; index++)
		dup[index] = str[index];

	dup[len] = '\0';

	return (dup);
}
