#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: numbers
 * @...: int to sum
 *
 * Return:  the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list op;

	va_start(op, n);
	for (i = 0; i <= n; i++)
			sum += va_arg(op, int);
	va_end(op);
	return (sum);
}
