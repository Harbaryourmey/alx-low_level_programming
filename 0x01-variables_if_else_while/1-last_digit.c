#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Description: To print the last digit of a number.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int lnum;

srand(time(0));
n = rand() - RAND_MAX / 2;
lnum = n % 10;
/* your code goes there */
if (lnum > 5)
{printf("Last digit of %i is %i and is greater than 5\n", n, lnum); }
else if (lnum == 0)
{printf("Last digit of i% is i% and is 0\n", n, lnum); }
else if (lnum < 6 && != 0)
{printf("Last digit of i% is % and is less than 6 and not 0\n", n, lnum); }
return (0);
}
