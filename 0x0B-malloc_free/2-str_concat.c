#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: pointer to the allocated space for the concatenation
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] || s2[i])
	{
		i++;
		len++;
	}

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[j++] = s2[i];

	concat[j] = '\0';

	return (concat);
}
