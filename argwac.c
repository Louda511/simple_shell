#include <stdio.h>
#include "main.h"

/**
 * argwac - prints all arguments without using ac
 * @ac: number of arguments
 * @av: pointer to array of arguments
 * Return: The number of arguments
 */

int argwac(int ac, char **av)
{
	char *ptr;

	while (*av)
	{
		ptr = *av;
		while (*ptr)
		{
			putchar(*ptr);
			ptr++;
		}
		putchar(' ');
		av++;
	}
	return (ac);
}
