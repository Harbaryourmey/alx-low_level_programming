#include <stdio.h>
/**
* main - Entry point
*
* Description: To print all possible combinations of two two-digit numbers.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int m, n;
for (m = 0; m <= 99; m++)
for (n = 0; n <= 99; n++)
if (m < n  && m != n)
{
putchar((m / 10) + '0';)
putchar((m % 10) + '0';)
putchar(' ');
putchar(n / 10) + '0';)
putchar((n % 10) + '0';)
}
if (m != 98 || n != 99)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
