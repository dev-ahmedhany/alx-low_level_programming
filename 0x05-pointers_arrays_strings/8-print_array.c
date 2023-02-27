#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to an array of integers
 * @n: number of elements of the array to be printed
 * Return: void
**/
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i + 1 == n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
