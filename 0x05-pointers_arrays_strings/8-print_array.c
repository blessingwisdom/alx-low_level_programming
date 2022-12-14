#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: a character
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x < n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	putchar('\n');
}
