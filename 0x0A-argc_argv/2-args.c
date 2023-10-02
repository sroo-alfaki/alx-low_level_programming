#include <stdio.h>
/**
 * main - entry point
 *
 * description prints -  prints the number of arguments passed into it
 * @argc:count of  value in array
 * @argv: array
 *
 * Return:always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	char *c;

	for (c = argv[argc - 1]; *c; c++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
