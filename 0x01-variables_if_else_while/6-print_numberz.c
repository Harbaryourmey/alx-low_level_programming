#include <stdio.h>
#include <unistd.h>
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
putchar(b + '0');
putchar('\n');
return (0);
}
