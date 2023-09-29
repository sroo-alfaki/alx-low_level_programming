#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n : int
 * @x : square root
 * Return: value int
 */

int sq(int n, int x);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * sq - square root of a number
 * @n : int
 * @x : square root
 * Return: value int
 */

int sq(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sq(n, x + 1));
	else
		return (-1);
}
