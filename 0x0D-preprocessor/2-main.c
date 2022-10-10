#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

