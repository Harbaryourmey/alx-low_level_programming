#include <stdio.h>
/**
* main - sum even fibonacci numbers under 4 million.
* Return: Nothing.
*/
int main(void)
{
unsigned long count, m, n, o, sums;
m = sums = 0;
n = 1;
for (count = 0; count < 50; count++)
{
o = m + n;
m = n;
n = o;
if (o % 2 == 0 && 0 < 4000000)
{
sums += o;
}
}
printf("%lu\n", sums);
return (0);
}
