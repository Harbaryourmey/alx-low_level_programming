#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
int l = n % 10;
if (n < 0)
l = l * -1;
_putchar(l + '0');
return (l);
}
