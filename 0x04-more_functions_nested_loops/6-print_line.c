#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal.
 *
 *  @n: is the number of times the character _ should be printed
 *
 * Return: always 0 (Success)
 */

void print_line(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
			_putchar('_');
		_putchar('\n');
	}
}
