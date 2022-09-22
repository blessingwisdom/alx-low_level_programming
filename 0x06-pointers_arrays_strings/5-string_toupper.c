#include "main.h"

/**
 * *_string_toupper - changes lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: pointer to the changed string
 */
char *_string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
