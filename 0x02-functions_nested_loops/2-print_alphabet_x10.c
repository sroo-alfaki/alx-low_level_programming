#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int b;
	int c;

	for (b = 0; b <= 9; b++)
	{
		for (c ='a'; c <='z'; c++)
		_putchar(c);
		putchar ('\n');
	}
}
