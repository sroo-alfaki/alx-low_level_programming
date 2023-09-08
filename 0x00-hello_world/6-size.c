#include <stdio.h>
/**
 * main - print a line of use printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;
int y;
long int z;
long long int d;
float f;
printf("size of a char: %lu byte(s)\n", sizeof(x));
printf("size of a int: %lu byte(s)\n", sizeof(y));
printf("size of a long int: %lu byte(s)\n", sizeof(z));
printf("size of a clong long int: %lu byte(s)\n", sizeof(d));
printf("size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
