#include <stdlib.h>

/**
 * str_concat - Concatenates two string.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the new string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* Find the length of s1 */
	while (s1[len1] != '\0')
	{
		len1++;
	}

	/* Find the length of s2 */
	while (s2[len2] != '\0')
	{
		len2++;
	}

	/* Allocate memory for both strings plus the null-terminator */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	/* Copy s1 into the new allocation */
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	/* Copy s2 right after s1 */
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	/* Null-terminate the combined string */
	concat[i] = '\0';

	return (concat);
}
