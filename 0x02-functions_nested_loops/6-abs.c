#include "main.h"

/**
 * _abs - prints the absolute function of the numebr
 * @n: the number to be evvaluated
 *
 * Return: the abslolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
