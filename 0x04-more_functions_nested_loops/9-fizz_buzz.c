#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	int i;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	printf("\n")i;
	return (0);
}
