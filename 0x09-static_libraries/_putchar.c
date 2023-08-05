#include <unistd.h>

/**
 * _putchar -function for printing the char c
 *
 * @c: the char we will print
 *
 * return return 1 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
