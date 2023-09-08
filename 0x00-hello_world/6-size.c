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
printf("size of a char: %u byte(s)\n", (unsigned int)sizeof(x));
printf("size of a int: %u byte(s)\n", (unsigned int)sizeof(y));
printf("size of a long int: %u byte(s)\n", (unsigned int)sizeof(z));
printf("size of a clong long int: %u byte(s)\n", (unsigned int)sizeof(d));
printf("size of a float: %u byte(s)\n", (unsigned int)sizeof(f));
return (0);
}
