#include <stdio.h>
/**
 * main - prints all letters in lowercase
 * expect for letters 'e' and 'q'
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	putchar('\n');
	return (0);
}
