#include "main.h"

/**
 *_pow_recursion - make the numbers big
 *@x: is a tiny number
 *@y: is another tiny number
 *Return: return big number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
