#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * Return: Pointer to the new string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	res = malloc((l1 + l2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);

	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}

	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
