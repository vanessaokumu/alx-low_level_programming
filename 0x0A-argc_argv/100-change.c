#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
	int cents, amount, i = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		amount = 0;
		for (; (cents % coins[i]) != 0; i++)
		{
			amount += (cents / coins[i]);
			cents = cents % coins[i];
		}
		amount += cents / coins[i];
		if ((atoi(argv[1])) < 0)
			amount = 0;
		printf("%d\n", amount);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
