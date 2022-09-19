#include "main.h"

/**
* swap_int - swaps the value of int a and int b
 * @a: pointer to the first value
 * @b: pointer to second value
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
