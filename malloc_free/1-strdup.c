#include <stdlib.h>

/**
 * _strdup - Returns a pointer.
 * @str: Pointer to the string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL.
 */
char *_strdup(char *str)
{
	char *dupl;
	unsigned int len = 0;
	unsigned int i;

	/* Return NULL if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Allocate memory for the string plus the null-terminator */
	dupl = malloc((len + 1) * sizeof(char));
	if (dupl == NULL)
	{
		return (NULL);
	}

	/* Copy characters including the null-terminator */
	for (i = 0; i <= len; i++)
	{
		dupl[i] = str[i];
	}

	return (dupl);
}
