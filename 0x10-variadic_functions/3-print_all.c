#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all -  function that prints anything.
 * @format: list of type
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	while (format && *format)
	{
		if (*format == 'c')
		{
			int c_val = va_arg(args, int);

			printf("%c", c_val);
		}
		else if (*format == 'i')
		{
			int i_val = va_arg(args, int);

			printf("%d", i_val);
		}
		else if (*format == 'f')
		{
			double f_val = va_arg(args, double);

			printf("%f", f_val);
		}
		else if (*format == 's')
		{
			char *s_val = va_arg(args, char *);

			printf("%s", s_val ? s_val : "(nil)");
		}

		if (*(format + 1))
			printf(", ");

		format++;
	}

	printf("\n");
	va_end(args);
}
