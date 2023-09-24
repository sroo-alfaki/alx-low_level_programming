#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Description :Write a C program that prints exactly
 *
 * Return: program should return 1
 */

int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar. 2015-10-19\n";

	write(1, a, sizeof(a));
	return (1);
}
