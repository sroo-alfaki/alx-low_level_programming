#include "variadic_functions.h"


/**
 * print_all -  function that prints anything.
 * @format: list of type
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list op;
	int i = 0;
	char *s, *sp = "";

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case'c':
					printf("%s%c", sp, va_arg(op, int));
					break;
				case'i':
					printf("%s%d", sp, va_arg(op, int));
					break;
				case'f':
					printf("%s%f", sp, va_arg(op, double));
					break;
				case 's':
					s = va_arg(op, char*);
					if (!s)
					s = "(nil)";
					printf("%s%s", sp, s);
					break;
				default:
					  i++;
					 continue;
			}
		sp = ",";
		i++;
		}
	}
	printf("\n");
	va_end(op);
}
