#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: using the main function
 * this program prints _putchar
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	int j = 0;

	for (j = 0; j < 8; j++)
		_putchar(str[j]);
	_putchar('\n');

		return (0);
}
