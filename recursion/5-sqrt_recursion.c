/**
 * helper_sqrt - Evaluates possible square roots recursively.
 * @n: The number to find the square root for.
 * @i: The current guess or iterator.
 *
 * Return: The natural square root, or -1 if none exists.
 */
int helper_sqrt(int n, int i)
{
	/* Base case: if i * i exceeds n, no natural square root exists */
	if (i * i > n)
	{
		return (-1);
	}

	/* Base case: if i * i equals n, we found the natural square root */
	if (i * i == n)
	{
		return (i);
	}

	/* Recursive step: increment i and check next number */
	return (helper_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input integer.
 *
 * Return: The natural square root, or -1 if n does not have one.
 */
int _sqrt_recursion(int n)
{
	/* Numbers less than 0 cannot have a natural square root */
	if (n < 0)
	{
		return (-1);
	}

	/* Start checking from 0 */
	return (helper_sqrt(n, 0));
}
