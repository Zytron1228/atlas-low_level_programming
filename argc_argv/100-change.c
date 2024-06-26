#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the min number of coins to make change for an amount of money
 *
 * @argc: the number of arguments supplied to argv[]
 * @argv: arguments supplied to main, including the name of the program
 *
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
		cents = 0;

	while (cents > 0)
	{
		if (cents - 25 >= 0)
			cents -= 25;
		else if (cents - 10 >= 0)
			cents -= 10;
		else if (cents - 5 >= 0)
			cents -= 5;
		else if (cents - 2 >= 0)
			cents -= 2;
		else
			cents--;
		coins++;
	}

	printf("%d\n", coins);

	return (0);
}
