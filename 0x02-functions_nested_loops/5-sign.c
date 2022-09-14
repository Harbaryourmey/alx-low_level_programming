#include "main.h"
/**
* print_sign - It prints the sign of a number.
* @n: digit to be checked.
* Return: 1 if positve, 0 if zero, -1 if negative.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return ('1');
}
else
{
_putchar('-');
return ('/');
}
}
