#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * Return: nothing
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
			putchar(n + '0');
		n += 1;
	}
	putchar('\n');
}
