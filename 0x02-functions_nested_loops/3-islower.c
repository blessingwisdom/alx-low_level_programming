#include "main.h"

/**
 * _islower - checks if the character is in lower case
 * @c: the character is determined if it's lowercase or not
 * Return: 1 is lowercase 0 is not
 */
int _islower(int c)
{
	int alpha;

	int count;

	count = 0;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (c == alpha)
		{
			count++;
			break;
		}
	}
	if (count == 0)
		return (0);
	else
		(return (1);
}
