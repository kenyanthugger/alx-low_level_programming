#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function that checks for a digit
 * @c: input value to check
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
