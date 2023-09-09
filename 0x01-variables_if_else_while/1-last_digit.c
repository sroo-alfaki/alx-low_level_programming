#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main -  entry point
*
* false or true value
*
*
* Return:0 (success)
*/

int main(void)
{
	int n;
	
	int m;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	if (m == 0)
		printf("last digit of %i is %i and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
	return (0);
}
