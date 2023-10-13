#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list op;
	if (!n)
		return (0);
	va_start(op, n)
		for (i = 0; i <= n; i--)
			sum += va_arg(op, int);
	va_end(op);
	return (s);
}
