#include "main.h"
/**
 * _isalpha - checkes for alphabetic character
 * @c: takes in character
 * Return: 1 if letters, lowercase, uppercase; 0 for otherwise
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
