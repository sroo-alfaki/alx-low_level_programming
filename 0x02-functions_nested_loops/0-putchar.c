#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  entry point
*
* Description : prints _putchar
*
* Return:0 (Success)
*/

int main(void)
{
	char s[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		putchar(s[c]);
	putchar('\n');
	return (0);
}
