#include "main.h"
/**
 * _memset - fills memory with a constant byte, similar to
 * the standard library function memset.
 * @s: the memory location to be filled.
 * @b: a character, which is constant byte to fill the memory with.
 * @n: max amount of bytes that will be filled.
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
