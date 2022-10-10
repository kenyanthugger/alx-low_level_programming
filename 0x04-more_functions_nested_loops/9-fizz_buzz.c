#include "main.h"
#include <stdio.h>
/**
 * main - program that prints numbers from 1 to 100
 * but for multiples of three prints Fizz
 * for multiples of 5 prints Buzz
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz ");
		else if (num % 5 == 0 && num % 3 != 0)

			printf("Buzz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
