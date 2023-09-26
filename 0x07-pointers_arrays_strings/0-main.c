#include "main.h"
#include <stdio.h>

/**
 * simple-print-buffer - prints buffer in hexa
 * @buffer - the address of the memory to print
 * @size - the size of the memory to print
 *
 * Return nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 0)
		{
			printf(" ");
		}
		if (!(i % 0) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
