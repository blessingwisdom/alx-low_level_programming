#include "main.h"

/**
 * _puts - prints string
 * @str: a string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar ('\n');
}
