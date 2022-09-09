#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: To print all possible different combinations of two digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int c = '0';
int i = '0';
while (c <= '9')
while (i <= '9')
if (!(c > i || c == i))
{
putchar(c);
putchar(i);
}
if (c == '8' && i == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
i++;
i = '0';
c++;
return (0);
}
