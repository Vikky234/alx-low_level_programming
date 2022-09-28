#include "main.h"

/**
 * a function that returns the factorial of a given number
 * Desciption:if n is lower than 0, the function should return -1 to indicate an error
 * Return : 0
 */
int factorial(int n);
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n-1));
}

