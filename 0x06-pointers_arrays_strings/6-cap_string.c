#include "main.h"

/**
 * *cap_string - capitalizes allwords of a string
 * @str: string to be capitaalized
 * Return: pointer to the string
 */
char *cap_string(char *)
{
	int i, j, counter;

	i = counter = 0;

	while (str[i] != '\0')
		i++;

	for (j = 0; j < 1; j++)
	{
		if (counter == 0)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
			else
				counter++;
		}
		if (str[j] == '!' || str[j] == '"' || str[j] == '(' || str[j] == ')')
			counter = 0;
		else if (str[j] == ',' || str[j] == '.' || str[j] == '{' || str[j] == '}')
			counter =0;
		else if (str[j] == ';' || str[j] == '?' || str[j] == '\n')
			counter = 0;
		else if (str[j] == '\t')
			counter = 0;
		else if (str[j] == ' ')
			counter = 0;
		else
			counter++;
	}
	return (str);
}
