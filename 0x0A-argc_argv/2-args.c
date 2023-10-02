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

	for (argv[argc - 1]; argv[argc]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
