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
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("size of a clong long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
