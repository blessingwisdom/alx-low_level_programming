#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: a string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, l;
	char c;

	for (i = 0; s[i] != '\0'; i++);
	l = i;
	for (i--, j = 0; j < l/2; i--, j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
