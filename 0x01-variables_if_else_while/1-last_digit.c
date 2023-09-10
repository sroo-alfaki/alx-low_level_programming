#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  entry point
*
* Description: print the value of n status:
*greater than, is zero anf and is less than 6.
*
* Return:0 (Success)
*/
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	if (y > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, y);
	else if (y == 0)
		printf("last digit of %i is %i and is 0\n", n, y);
	else if (y < 6 && y != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, y);
	return (0);
}
