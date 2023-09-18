#include "main.h"

/**
 * _puts -  function that prints a string
 * @str: The value of pointer
 *
 * Return: 0 always
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
