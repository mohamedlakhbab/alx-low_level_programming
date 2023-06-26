#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: the a value
 * @b: the b value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
