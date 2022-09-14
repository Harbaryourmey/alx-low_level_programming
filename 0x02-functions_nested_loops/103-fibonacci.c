#include <stdio.h>
/**
* main - sum even fibonacci numbers under 4 million.
* Return: Nothing.
*/
int main(void)
{
int  m = 1, n = 2, sums= 0;
int o;
while (n < 40000000)
{
if (n % 2 == 0)
sums += n;
o  = n;
n += m;
m = o;
}
printf("%d\n", sums);
return (0);
}
