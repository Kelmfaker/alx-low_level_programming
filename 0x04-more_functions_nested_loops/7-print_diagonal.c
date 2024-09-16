#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: parameter
 *
 * Return: always 0
 */

void print_diagonal(int n)
{
int i;

for (i = 1; i < n; i++)
{
if (n > 0)
{
	_putchar(' ');
}
}
_putchar('\\');

_putchar('\n');
}
