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
	int j = 0;
	int k = 0;

	while (dest[j] != '\0')
		j++;
	while (src[k] != src[j])
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';

	return (dest);
}
