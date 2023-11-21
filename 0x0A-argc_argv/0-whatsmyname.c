#include <stdio.h>
/**
 * main - entry point
 *description prints - program that prints its name, followed by a new line.
 *@argc:count of  value in array
 *@argv: array
 *Return:always 0 (success)
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
