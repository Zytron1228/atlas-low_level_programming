#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point | prints result
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1;
	int num2;

	printf("0");

	operator = argv[3];
	num1 = atoi(argv[2]);
	num2 = atoi(argv[4]);

	printf("a");

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	putchar('b');

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	putchar('c');

	if (num2 == 0 && (operator[0] == '/' || operator[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	putchar('d');

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
