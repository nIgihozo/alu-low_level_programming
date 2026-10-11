/**
 * factorial - Returns the factorial of a given number using recursion.
 * @n: The integer number to calculate the factorial for.
 *
 * Return: The factorial of n, or -1 if n is lower than 0 (error).
 */
int factorial(int n)
{
	/* Error case: if n is less than 0 */
	if (n < 0)
	{
		return (-1);
	}

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

	/* Recursive step: n * factorial(n - 1) */
	return (n * factorial(n - 1));
}
