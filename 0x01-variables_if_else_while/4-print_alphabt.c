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
	char c = 'a';

	while
		(c <= 'z')
		{
			if (c == 'e' || c == 'q')
				c++;
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
