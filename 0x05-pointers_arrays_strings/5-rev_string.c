#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverse a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char ltemp;

	while (*(s + 1) != '\0')
		i += 1;
	i -= 1;

	while (aux < 1)
	{
		ltemp = s[i];
		s[i] = s[aux];
		s[aux] = ltemp;
		aux++;
		i--;
	}
}
