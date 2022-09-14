#include "main.h"
/**
* main - check the code.
*
* description: To checks for alphabetic character.
* @c: character to test.
* Return: Always 0.
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && C <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
