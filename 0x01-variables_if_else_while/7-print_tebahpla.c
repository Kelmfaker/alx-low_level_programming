#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
