#include "main.h"

/**
 *  puts2 - function that prints every other character of a strin
 * @str: The value of pointer
 *
 * Return:0 always
 */

void puts2(char *str)
{
	int c;

	for (c = 0; str != '\0'; ++c)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar('\n');
}
