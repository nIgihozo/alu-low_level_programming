#include <unistd.h>

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: Pointer to the string to print.
 */
void _print_rev_recursion(char *s)
{
    /* Base case: if we reach the null-terminator, stop and return */
    if (*s == '\0')
    {
        return;
    }

    /* Recursive step: move forward to the end of the string first */
    _print_rev_recursion(s + 1);

    /* Print each character as the recursive stack unwinds */
    write(1, s, 1);
}
