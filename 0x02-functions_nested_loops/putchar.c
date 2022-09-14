#include <unistd.h>

/**
 *
 *_putchar - writes the character c to stdout
 *
 *c: The character to print
 *
 * Return: On success show one.
 *
 * On error, negative one is returned, and error is set.*
 */

int _putchar(char c)

{

		return (write(1, &c, 1));

}
