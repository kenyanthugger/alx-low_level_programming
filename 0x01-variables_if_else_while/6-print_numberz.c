#include <stdio.h>
/**
 * main - prints all single digits from 0
 * return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
