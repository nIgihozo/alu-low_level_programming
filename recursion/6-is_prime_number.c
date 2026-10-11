/**
 * helper_prime - Checks if a number is divisible by any integer recursively.
 * @n: The number to check.
 * @i: The current divisor being tested.
 *
 * Return: 1 if prime, 0 if not prime.
 */
int helper_prime(int n, int i)
{
	/* Base case: if divisor squared exceeds n, it's a prime number */
	if (i * i > n)
	{
		return (1);
	}

	/* Base case: if n is divisible by i, it's not prime */
	if (n % i == 0)
	{
		return (0);
	}

	/* Recursive step: check the next divisor */
	return (helper_prime(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number.
 * @n: The input integer to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Numbers less than or equal to 1 are not prime */
	if (n <= 1)
	{
		return (0);
	}

	/* Start checking divisors from 2 */
	return (helper_prime(n, 2));
}
