#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int t;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/

		{
		 	for (t = tens; t <= '9'; t++) /*print second of pair*/
			
				{
					putchar(tens);
					putchar(' ');
					putchar(t);

					if (!((tens == '9') &&
					      (t == '9')))
					{
						putchar(',');
					}
				}
				o = '0';
		}
	putchar('\n');

	return (0);
}
