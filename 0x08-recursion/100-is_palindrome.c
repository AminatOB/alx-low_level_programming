#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String to be measured
 * Return: Lenght of s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * aux - Auxiliar function for is_palindrome
 * @s: String to be checked
 * @i: Auxiliar counter, beggining of the string
 * @j: Auxiliar counter, end of the string
 * Return: 1 if s is palindrome, 0 if not
 */

int aux(char *s, int i, int j)
{
	if (i <= j && s[i] == s[j])
		return (aux(s, i + 1, j - 1));
	else if (i > j)
		return (1);
	else
		return (0);
}

/**
 * is_palindrome - Checks if a string is palindrome
 * @s: string to check
 * Return: 1 if s is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i;
	int j;

	i = 0;
	j = _strlen_recursion(s) - 1;
	return (aux(s, i, j));
}
