#include <stdlib.h>

/**
 * create_array - Creates an array of chars.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if it fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	/* Return NULL if size is 0 */
	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	/* Initialize each element with the specified character */
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
