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
		return (1);
	putchar('+');
	}
	else if (n == 0)
	{
		return (0);
			putchar('0');
	}
	return (-1);
			putchar('-');
}
