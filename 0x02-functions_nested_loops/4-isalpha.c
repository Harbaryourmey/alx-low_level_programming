#include "main.h"
/**
*
* _isalpha - To checks for alphabetic character.
* @c: character to test.
* Return: 1 if character is English alphabet, and zero if otherwise..
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
