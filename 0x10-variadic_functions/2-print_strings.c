#include "variadic_functions.h"


/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string
 * @n: numbers
 * @...: int to sum
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	char *s;
	unsigned int i;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(op, char *);
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);
				if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
				}
					printf("\n");
					va_end(op);
}
