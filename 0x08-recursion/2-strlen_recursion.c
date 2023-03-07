#include "main.h"

/**
 *_strlen_recursion - string length the long way
 *@s: ssssss ( like somethinggggg)
 *Return: return something
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
return (1 + _strlen_recursion(s + 1));
else
return (0);
}
