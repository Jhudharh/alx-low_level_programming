#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @c: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}
