#include <stdio.h>
#include <stdlib>
/**
 * main - entry point
 *
 * description prints - program that multiplies two numbers
 * @argc:count of  value in array
 * @argv: array
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int s;

	if (argc == 3)
	{
		s = atoi (argv[1]) * atio (argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
