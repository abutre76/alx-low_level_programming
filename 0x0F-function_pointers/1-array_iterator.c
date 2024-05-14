#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array.
 * @array: The array to be iterated
 * @size: Size of the @array
 * @action: The function pointer
 * Return: Nothinng
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if ((array == NULL) || (action == NULL))
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
