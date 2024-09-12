#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: parameter to begin
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
	printf("%d", n);
	if (n != 98)
	printf(", ");
	n++;
	}
	printf("\n");
		while (n >= 98)
		{
		printf("%d", n);
		if (n != 98)
		printf(", ");
		n--;
		}
		printf("\n");
			while (n == 98)
			{
			printf("%d\n", n);
			}
}
