#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{
int digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
if (digit < '9')
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
