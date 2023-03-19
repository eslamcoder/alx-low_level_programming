#include <stdio.h>
/**
 * main - Entry points
 * Descrition: 'prints all possible different combinations of two digits'
 * Return: Always 0
 */
int main(void)
{
	int d, b;

	for (d = '0'; d < '9'; d++)
	{
	for (b = d + 1; b <= '9'; b++)
	{
	if (b != d)
	{
	putchar(d);
	putchar(b);
	if (d == '8' && b == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);

}
