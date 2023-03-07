#include "main.h"

int _prime(int n, int c);
/**
 *is_prime_number - PRIME PRIME
 *@n: PRIME PRIME
 *Return: PRIME PRIME
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 *_prime - this is dumb that i need to do it this way
 *@n: PRIME
 *@c: PRIME
 *Return: PRIME
 */
int _prime(int n, int c)
{
	if (n <= 1)
		return (0);

	if (n % c == 0 && c > 1)
		return (0);

	if ((n / c) < c)
		return (1);

	return (_prime(n, c + 1));
}
