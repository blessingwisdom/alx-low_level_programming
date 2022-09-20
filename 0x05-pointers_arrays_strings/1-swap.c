#include "main.h"

/**
 * swap_int - Function that swaps 2 numbers
 * @a - number to be evaluated
 * @b - number to be evaluated
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
