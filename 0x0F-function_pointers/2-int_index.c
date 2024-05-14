#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - searches for an integer.
 * @array: The array param
 * @size: The @array size
 * @cmp: Pointer to the function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
