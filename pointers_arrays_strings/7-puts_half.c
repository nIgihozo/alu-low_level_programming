#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: Pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	/* Find total length of string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Calculate starting point for second half */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* Print second half */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
