#include <stdio.h>
/**
* main - Entry point
*
* Description: To print all single digit numbers of base 10 starting from 0.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int b;
for (b = 0; b < 10; b++)
putchar(b);
putchar("%d", b);
return (0);
}
