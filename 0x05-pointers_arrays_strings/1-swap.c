#include "main.h"

/**
 * swap_int - Function that swaps 2 numbers
 * @a - number 1
 * @b - number 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
