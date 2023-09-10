#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a', h = 'A';

	while
		(c <= 'z')
		{
			putchar(c);
			c++;
		}
	while
		(h <= 'Z')
		{
			putchar(h);
			h++;
		}
	putchar('\n');
	return (0);
}
