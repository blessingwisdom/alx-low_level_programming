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

	m = 0;
	while (m < n && src[m] != '\0')
		dest[m] = src[m];
		m++;

	while (m < n)
		dest[m] = '\0';
		m++;
	
	return (dest);
}
