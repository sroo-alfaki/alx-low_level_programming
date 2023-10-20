#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - print result
 * @argc: number
 * @argv: array
 *
 * Return: always 0
 */
int main(int argc, char **argv[])
{

	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
}
/*	int n1, n2, op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}



	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
}
	if (((*argv[2] != '+') &&
				(*argv[2] != '-') &&
				(*argv[2] != '/') &&
				(*argv[2] != '*') &&
				(*argv[2] != '%') ||
				(strlen(argv[2] != 1))
				{
				printf("Error\n");
				exit(99);
				}


	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
		}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = (*get_op_func(argv[2]))(n1, n2));
	printf("%d\n", op);
	return (0);
}*/
