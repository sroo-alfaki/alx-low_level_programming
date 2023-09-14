#include "main.h"

/**
 *  print_last_digit - function that prints the last digit of a number.
 *
 * @n :number  input
 *
 * Return:  the value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		l = -1 * (n % 10);
	else l = n % 10;
	_putchar(l + '0');
	return (l);
}
