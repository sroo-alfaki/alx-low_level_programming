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
	int i;
	va_list op;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(op, n);
	for (i = 0; i < n; i++)
		if (i > 0 && separator != NULL)
			printf("%s", separator);
			printf("%d", va_arg(op, int);
va_end(op);
}
