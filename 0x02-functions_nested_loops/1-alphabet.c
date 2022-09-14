#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Description: using the print_alphabet function
 * this program prints alphabets in lowercase
 * Return void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
