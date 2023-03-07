#include "main.h"

int _sqrt(int n, int c);
/**
 *_sqrt_recursion - watch it there squirt
 *@n: night night
 *Return: return what though
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 *_sqrt - this is dumb that i need to do it this way
 *@n: please come over here
 *@c: please please dear God
 *Return: please anything God
 */
int _sqrt(int n, int c)
{
	int sqt = c * c;

	if (sqt < 0)
		return (-1);

	if (sqt == n)
		return (c);

	return (_sqrt(n, c + 1));
}
