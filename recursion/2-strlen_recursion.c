/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: Pointer to the string to measure.
 *
 * Return: The length of the string as an integer.
 */
int _strlen_recursion(char *s)
{
	/* Base case: if we hit the null-terminator, length is 0 */
	if (*s == '\0')
	{
		return (0);
	}

	/* Recursive step: 1 (for current char) + length of the rest of the string */
	return (1 + _strlen_recursion(s + 1));
}
