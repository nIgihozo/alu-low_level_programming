/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base integer.
 * @y: The exponent integer.
 *
 * Return: The result of x^y, or -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	/* Error case: if y is lower than 0 */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: any number to the power of 0 is 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Recursive step: x * _pow_recursion(x, y - 1) */
	return (x * _pow_recursion(x, y - 1));
}
