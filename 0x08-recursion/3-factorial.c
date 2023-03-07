#include "main.h"

/**
 *factorial - does some number stuff
 *@n: night sky
 *Return: Return the reason for existance
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
