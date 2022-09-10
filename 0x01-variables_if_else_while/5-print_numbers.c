#include <stdio.h>

/**
 * main - prints the number 0 to 9
 *
 * Description: using the main function
 * this program prints numkber 0 to 9
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
