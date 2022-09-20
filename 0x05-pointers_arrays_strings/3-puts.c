#include "main.h"
#include <unistd.h>

/**
 * _puts - prints string
 * @str: a string
 * Return: void
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar ('\n');
}
