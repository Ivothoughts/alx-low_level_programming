#include "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet in lowercase
 *
 * Description: using the print_alphabet_x10 function
 * this program prints ten times the alphabet in lowercase
 * Return void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
