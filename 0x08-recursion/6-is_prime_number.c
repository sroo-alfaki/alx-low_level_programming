#include "main.h"

/**
 * is_prime_number - returns 1 if the integer is a prime number, otherwise 0
 * @x : int
 * @y : int
 * Return: value 0 or 1
 */

int pp(int x, int y);
int is_prime_number(int n)
{
	return (pp(n, 2));
}

/**
 * pp  -  returns 1 if the input integer is a prime number, otherwise return 0
 * @x : int
 * @y : int
 * Return: value 0 or 1
 */

int pp(int x, int y)
{
if (y >= x && n > 1)
return (1);
else if (x % y == 0 || x <= 1)
return (0);
else
return (pp(x, y + 1));
}
