#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
int count;
unsigned long a, b, c;
unsigned long m, n, o, carry;
count = 0;
a = 0;
b = 1;
for (count = 1; count <= 91; count++)
{
c = a + b;
a = b;
b = c;
printf("%lu, ", c);
}
m = a % 1000;
a = a / 1000;
n = b % 1000;
b = b / 1000;
while (count <= 98)
{
carry = (m + n) / 1000;
p = (m + n) - carry * 1000;
c = (a + b) + carry;
m = n;
n = p;
a = b;
b = c;
if (p >= 100)
printf("%lu%lu", c, p);
else
printf("%lu0%lu", c, p);
if (count != 98)
printf(", ");
count++;
}
putchar('\n');
return (0);
}
