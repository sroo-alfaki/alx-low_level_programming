#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while
		(c >= 'a')
		{
			putchar(c);
			c--;
		}
	putchar('\n');
	return (0);
}
