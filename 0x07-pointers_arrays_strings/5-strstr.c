#include "main.h"
/**
 * _strstr - find the first occurances string
 * @haystack: string where the search is made
 * @needle: string whose occurnce si searched in haystack
 * Return: return a pointer to nul
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
