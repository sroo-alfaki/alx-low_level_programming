#include "main.h"

/**
 * print_rev -  function that prints a string
 * @s: The value of pointer
 *
 * Return: 0 always
 */
void print_rev(char *s)
{
	int e = 0;

	while (s[e])
		e++;
	while (e--)
	{
		_putchar(s[e]);
	}
	_putchar('\n');
}
