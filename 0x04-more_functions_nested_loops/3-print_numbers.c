#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9 .
 *
 * Return: always 0 (Success)
 */

void print_numbers(void)
{
	int c = 0;

	do {
		_putchar(c + 48);
		c++;
	} while (c >= 0 && c <= 9);
	_putchar('\n');
}
