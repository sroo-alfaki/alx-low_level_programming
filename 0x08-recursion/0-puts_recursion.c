#include "main.h"

/**
 * _puts_recursion - function that prints a string ,followed by a new line.
 * The standard library provides a similar function: puts
 *@s : string
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
