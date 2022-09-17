#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100
 * But for multiples of 3 print Fizz
 * and for the multiples of 5 print Buzz
 *
 * @void: no argument
 * Return: 0
 */
int main(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i == 100)
			printf("Buzz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
