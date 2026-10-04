#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 *               followed by a new line.
 * @a: Pointer to the array of integers
 * @n: Number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
