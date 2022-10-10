#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prints string in reverse
 * @s: string to print
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + 1) != '\0')
		i += 1;
	i -= 1;

	while (i >= 0)
	{
		putchar(*(s + 1));
		i--;
	}
	putchar('\n');
}
