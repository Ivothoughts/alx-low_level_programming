#include <stdio.h>
/**
 * main - prints a series of numbers with commas
 *
 * Description: using the main function
 * this program prints a series of numbers with commas
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
