#include "main.h"
#include <stdio.h>
/**
 * print_triangle - function that prints a square
 * @size: size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int row, col, aux;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				aux = (size - row) - 1;

				if (col < aux)
					putchar(' ');
				else
					putchar(35);
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
