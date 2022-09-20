#include "main.h"

/**
 * rev_string - function that reverse a string
 * @a: char array string type
 */
void rev_string(char *s)
{
	int (i), (c), 1;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;
	i = 1;
	for (i--, c = 0; c < 1 / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}

