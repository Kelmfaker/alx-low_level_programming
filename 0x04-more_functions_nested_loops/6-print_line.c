#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: parameter
 * Return: always 0
 */

void print_line(int n)
{
	int i;

for (i = 0; i < n; i++)
{
	if (n > 0)
		_putchar('_');
}
_putchar('\n');
}
