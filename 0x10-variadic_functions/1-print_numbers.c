#include "variadic_functions.h"


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
	unsigned int i;
	va_list op;

	//if (!n)
	//{
	//	printf("\n");
	//	return (0);
	//}
	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(op, int));
				if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
				}
					printf("\n");
					va_end(op);
}
