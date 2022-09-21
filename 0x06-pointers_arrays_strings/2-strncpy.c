#include "main.h"

/**
 * *_strncpy - copies  a string
 * @dest: character to be copied to
 * @src: character to be copied
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];

	for ( n < m; m++)
		dest[m] = '\0';
	
	return (dest);
}
