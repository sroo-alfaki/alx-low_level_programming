#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  entry point
*
* Description: prints all possible different combinations of three digits.
*
* Return:0 (Success)
*/
int main(void)
{
	int n1, n2;

	for (n1 = 48; n1 < 57; n1++)
	{
	for (n2 = 48; n2 <= 57; n2++)
	{
		if (n1 < n2)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 56 || n2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
