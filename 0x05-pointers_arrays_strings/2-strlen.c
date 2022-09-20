#include "main.h"
#include <stddef.h>

/**
 * _strlen - returns length of string
 * @s: string
 * Return:void
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
