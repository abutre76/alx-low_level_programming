#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of all it's parameters.
 * @n: Number of parameters.
 * Return: The sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
