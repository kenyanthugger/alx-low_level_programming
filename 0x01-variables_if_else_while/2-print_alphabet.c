#include <stdio.h>
/**
 * main - prints all alphabetical letters in small letters
 * Return: 0
 */
int main(void)
{
	int n = 'A';
	while (n <= 'Z'){
		n = tolower(n);
		putchar(n);
		n ++;
	}
	return (0);
}
