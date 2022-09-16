#include "main.h"

/**
 * _isupper - checksif the character is lowercase
 * @c: the character to be determined if it's lower or not
 *
 * Return: 1 if it is lowercase, 0 if not.
 */
int _isupper(int c)
{
	int alpha;

	int count;

	count = 0;

	for (alpha = 65; alpha <= 90; alpha++)
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
		return (1);
}
