#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
*
* Description: To print all possible different combinations of three digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int m, n, o;
for (m = '0'; m <= '9'; m++)
for (n = '0'; n <= '9'; n++)
for (o = '0'; o <= '9'; o++)
if (m < n && n < o)
{
putchar(m);
putchar(n);
putchar(o);
}
if (m != '7')
{
putchar(',');
putchar(' ');
}
putchar ('\n');
return (0);
}
