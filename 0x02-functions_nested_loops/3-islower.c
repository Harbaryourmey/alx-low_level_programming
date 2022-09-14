#include "main.h"
/**
* _islower - To check whether a character is lowercase character or not.
* @c: character to test, which store the value received.
* Return: 1 if it is lowercase letter and 0 if otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
