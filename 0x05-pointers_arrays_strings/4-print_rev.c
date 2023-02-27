#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to a string
 * Return: void
**/
void print_rev(char *s)
{
	int i = sizeof(*s);

	i--;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
