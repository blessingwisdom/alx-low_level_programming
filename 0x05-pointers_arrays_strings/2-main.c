#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "This is cool";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
