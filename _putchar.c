#include <unistd.h>

/**
 * _putchar - a function that writes the character C to stdout
 * @c: prints character
 * Return: 1 (success).
 * On error, return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
