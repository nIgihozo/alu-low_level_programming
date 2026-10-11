#include <unistd.h>

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: Pointer to the string to print.
 */
void _puts_recursion(char *s)
{
/* Base case: if the current character is null-terminator */
if (*s == '\0')
{
write(1, "\n", 1);
return;
}
/* Print the current character */  
write(1, s, 1);
/* Recursive call with the next character pointer */
_puts_recursion(s + 1);
}
