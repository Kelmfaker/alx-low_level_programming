#include "main.h"
#include <stdio.h>
/**
 * more_numbers - function that prints 10 times the numbers
 *
 * Return: always 0
 */

void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
	for (j = 0; j <= 14; j++)
	{
		if (j >= 10)
		{
		_putchar('1');
		_putchar((j % 10) + '0');
		}

else
{
	_putchar(j + '0');
}
	}
printf("\n");
}
}
