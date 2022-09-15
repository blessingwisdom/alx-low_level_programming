#include "main.h"

/**
 * print_alphabet - print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet(void)
{
	int timer;

	char alpha;

	for (timer = 0; timer < 10; timer++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		_putchar('\n');
	}
}
