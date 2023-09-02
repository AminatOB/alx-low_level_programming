#include "main.h"

/**
 * flip_bits - determine how many bits to flip to get from one num to another
 * @n: number
 * @m: number2
 * Return: bits differ(diff)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = 0;
	unsigned long int difference;

	/* Xor both nums to show bit 1 if different bits */
	difference = n ^ m;

	/* keep shifting difference to right and tallying the ones up */
	do {
		diff += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (diff);
}

