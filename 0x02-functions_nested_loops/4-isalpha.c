#include "main.h"

/**
 * _isalpha - determines if the given character is an alphabet
 *
 * Retun 0 if the character is alphabet 1 if it is not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
