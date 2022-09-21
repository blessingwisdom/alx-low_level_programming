#include "main.h"

/**
 * *_strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: n numbers of byte(char)
 * Return: dest (concatenated string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int n = 0;
	int k = 0;

	while (dest[n] != '\0')
		n++;
	while (src[k] != src[n])
	{
		dest[n] = src[k];
		n++;
		k++;
	}
	dest[n] = '\0';

	return (dest);
}
