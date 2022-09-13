#include "main.h"
/**
 * main - prints _putchar as a massage.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int str[] = {10, 100, 110, 111, 84, 104};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
