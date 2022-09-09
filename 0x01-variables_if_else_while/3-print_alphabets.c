#include <stdio.h>
/**
* main - Entry point
*
* Description: To print the alphabet in lowercase and uppercase, with new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{putchar(ch); }
for (ch = 'A'; ch <= 'Z'; ch++)
{putchar(ch); }
putchar('\n');
return (0);
}
