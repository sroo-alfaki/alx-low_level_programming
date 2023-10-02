#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * description prints -  program that adds positive numbers
 * @argc:count of  value in array
 * @argv: array
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int s = 0;
	char *a;

	while (--argc)
	{
		for (a = argv[argc]; *a; a++)
			if (*a < '0' || *a > '9')
				return (printf("Error\n"), 1);
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
