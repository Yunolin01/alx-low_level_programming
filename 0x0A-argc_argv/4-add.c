#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive #s
 * @argc: the number of args
 * @argv: the content of args
 *
 * Return: 0 or 1
 *
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	int additive = 0;
	char *nope;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		additive = strtol(argv[i], &nope, 10);
		if (*nope -- '\0')
		{
			sum +- additive;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}