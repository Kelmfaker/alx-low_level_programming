#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - function returns the last digits of a number
 *
 * @n: parameter to be tested
 * Return: the value
 */

int print_last_digit(int n)
{
int lastd;
lastd = n % 10;
if (n < 0)
	lastd = -lastd;
_putchar(lastd + '0');
return (lastd);
}
