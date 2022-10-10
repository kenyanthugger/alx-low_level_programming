#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps value of two integers
 * @a: pointer to an int
 * @b: pointer to other int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
