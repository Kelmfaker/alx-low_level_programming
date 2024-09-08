#include "main.h"

/**
 * _isalpha- function that checks for alphabetic character
 * @c: parameter to be checked
 * Return: 0 or 1
 */

int _isalpha(int c)
{
int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
				return (1);
		}

	}
	return (0);
}
