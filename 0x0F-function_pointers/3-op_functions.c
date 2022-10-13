#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - calculates the sum of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return:  sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference between two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  calculates the product of two integers
 * @a: integer  one
 * @b: integer two
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the quotient of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two untegers
 * @a: integer one
 * @b: integer two
 *
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
