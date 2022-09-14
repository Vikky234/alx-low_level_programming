#include "main.h"
/**
 * @n: int type number
 *
 * print_last_digit - Print the last digit of a number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}

