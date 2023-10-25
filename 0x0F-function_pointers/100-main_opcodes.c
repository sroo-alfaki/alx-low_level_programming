#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints its own opcodes
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{

	int bt, i;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bt = atoi(argv[1]);

	if (bt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;
	for (i = 0; i < bt; i++)
	{
		if (i == bt - 1)
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
	}
	return (0);
}
