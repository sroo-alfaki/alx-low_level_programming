#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string
 * @n: numbers
 * @...: int to sum
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list op;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(op, n);
		while (i--)
			printf("%d%s", va_arg(op, int),
					i ? (separator ? separator : ","):"\n");
		va_end(op);
}
