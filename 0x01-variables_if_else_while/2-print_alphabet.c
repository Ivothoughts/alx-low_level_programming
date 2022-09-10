#include <stdio.h>
/**
 * main - prints the alphabetic
 *
 * Description: using the main function
 * this program prints the alphabetic
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
