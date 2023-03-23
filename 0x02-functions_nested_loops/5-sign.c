#include "main.h"
/**
 * print_sign - Prints the sign of numbers
 * @n: the number to be checked
 * Return: 1 for positive num, -1 for negative num, or  for any thing else
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
