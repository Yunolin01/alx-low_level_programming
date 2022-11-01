#include "main.h"

/**
 * _memset: fills memory with constant byte
 * @s: memory area
 * @b: bytes
 * @n: the number of bytes
 *
 * Return: a pointer to the filled memory area @s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
