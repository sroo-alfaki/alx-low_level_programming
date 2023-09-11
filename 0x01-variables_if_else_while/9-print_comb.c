#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  entry point
*
* Description: prints all the numbers of base 16 in lowercase
*
* Return:0 (Success)
*/

int main(void)
{
	int d = 0;

	while
		(d <= 9)
		{
			putchar(d + 48);
			if (d != 9)
			{
				putchar(',');
				putchar(' ');
			}
	d++;
		}
	putchar('\n');
	return (0);
}

