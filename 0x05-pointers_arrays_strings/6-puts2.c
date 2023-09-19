#include "main.h"

/**
 *  puts2 - function that prints every other character of a string
 * @str: The value of pointer
 *
 * Return:0 always
 */

void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *y = str;
	int p;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	t = l - 1;
	for (p = 0; p <= t; ++p)
	{
		if (p % 2 == 0)
			_putchar(str[p]);
	}
	_putchar('\n');
}
