/**
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * area pointed to by @s with the constant byte @c
 * @s: a pointer to the memory area to be filled
 * @c: the char to fill the memory area with
 * @n: the number of bytes to be filled
 * Return: a pointer to the filled memory area @s
 */
char *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
