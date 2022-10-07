#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	
	return (i);
}
/**
 * *_srtcpy - copy arrays
 * @dest: dest array
 * @src: src array
 * Return: dest
 */

char *_srtcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * *_strdup - array for print string
 * @str: array of elements
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	
	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	_srtcpy(dst, str);
	return (dst);
}
