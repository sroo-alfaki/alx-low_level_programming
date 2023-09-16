include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 *
 *  @n: number of times the character \ should be printed
 *
 * Return: always 0 (Success)
 */

void print_diagonal(int n)
{
	int c, a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (a = 1; a <= c; a++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
