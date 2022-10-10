#include "main.h"
#include <stdio.h>
/**
 * print_square - function that prints a square
 * @size: size of square
 * Return: nothing
 */
void print_square(int size)
{
	int col, row;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
