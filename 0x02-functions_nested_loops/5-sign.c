#include "main.h"
#include <stdio.h>

/**
 * print_sign - function that prints the sign of number
 * @n: parameter to be tested
 * Return: 0 or 1 or '-1'
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
if (n == 0)
{
	_putchar('0');
	return (0);
	}
		_putchar('-');
		return (-1);
}
