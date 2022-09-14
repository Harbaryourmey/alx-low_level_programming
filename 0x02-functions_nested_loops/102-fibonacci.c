#include <stdio.h>
/**
* main - print the first 50 fibonacci numbers starting with 1 and 2.
* Return: Nothing.
*/
int main(void)
{
unsigned long count, m, n, o;
m = 0;
n = 1;
for (count = 0; count < 50; count++)
{
o = m + n;
m = m;
n = o;
printf("%lu", o);
if (count == 49)
putchar('\n');
else
{
printf(", ");
}
}
return (0);
}
