#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string
 * @dest: destination string
 * @src: source string which is to be copied
 * Return: a copied character
 */
char *_strcpy(char *dest, char *src)
{
	int m, n;

	m = 0;

	while (src[m] != 0)
		m++;

	for (n = 0; n <= m; n++)
		dest[n] = src[n];

	return (dest);
}
