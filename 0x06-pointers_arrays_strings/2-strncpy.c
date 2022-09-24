#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies  a string
 * @dest: character to be copied to
 * @src: character to be copied
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
