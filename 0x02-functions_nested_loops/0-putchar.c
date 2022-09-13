#include "main.h"
/**
 * main - Print 'Putchar' followed by a new line.
 *
 * Description: You are not allowed to use standard library.
 *
 * Return: 0
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

