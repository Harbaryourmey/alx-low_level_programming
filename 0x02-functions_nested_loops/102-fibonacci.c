#include <stdio.h>
/**
* main - print the first 50 fibonacci numbers starting with 1 and 2.
* Return: Nothing.
*/
int main(void)
{
long m = 0;
long k = 1;
int n = 0;
long fib;
while (n < 50)
{
fib = k + m;
if (n != 49)
printf("%ld, ", fib);
else
printf("%ld\n", fib);
m = k;
k = fib;
n += 1;
}
return (0);
}
