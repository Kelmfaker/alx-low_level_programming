#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this function prints alph in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
_putchar('\n');
}
