#include "main.h"
/**
* Description: It prints 10 times the alphabet, in lowercase, with new line.
*
* Return: Always 0.
*/
int main(void)
{
void print_alphabet_x10(void);
char m;
int i;
for (i = 0; i < 10; ++i)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
_putchar('\n');
}
return (0);
}
