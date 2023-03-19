#include <stdio.h>
/**
 * main - Entry points
 * Descrition: 'prints all possible combinations of single-digit numbers'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 9; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
