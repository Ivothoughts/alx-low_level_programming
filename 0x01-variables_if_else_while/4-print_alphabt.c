#include <stdio.h>

/**
 * main - prints some letters of the alphabet
 *
 * Description: using the main function
 * this program prints some letters of the alphabet
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}
