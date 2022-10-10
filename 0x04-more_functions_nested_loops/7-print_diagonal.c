#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function draws a diagonal line on terminal
 * @n: input value to check
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		while (j <= i)
		{
			if (j != i)
				putchar(' ');
			else
				putchar(92);
			j += 1;
		}
		putchar('\n');
		i += 1;
		j = 0;
	}
	if (n <= 0)
		putchar('\n');
}
