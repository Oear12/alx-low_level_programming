#include "main.h"

/**
 * main - print the number from 1 to 100, followed by a new line
 * but for multiples of three print Fizz instead of the number
 * and for the multiple of five print Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else
		{
			printf("%d", i);
		}
	}
	printf('\n');
	return (0);
}
