#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
*
* Description: To prints the alphabet in lowercase, followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
if (ch != 'e' && ch != 'q')
{putchar(ch); }
else
{}
putchar('\n');
return (0);
}
