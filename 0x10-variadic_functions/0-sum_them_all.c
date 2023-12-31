#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: numbers
 * @...: int to sum
 *
 * Return:  the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;
	va_list op;

	if (!n)
		return (0);
	va_start(op, n);
	for (i = 0; i < n; i++)
		s = s + va_arg(op, int);
	va_end(op);
	return (s);
}
