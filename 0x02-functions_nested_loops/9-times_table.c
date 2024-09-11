#include "main.h"
#include <stdio.h>
/**
 * times_table - function that prints the 9 times table
 *
 * Return: always 0
 */

void times_table(void)
{
int i, j, k;

for (i = 0; i <= 9 ; i++)
{
	for (j = 0; j <= 9 ; j++)
	{
	k = i * j;
	printf("%d, ", k);
	}
	printf("\n");
}
}
