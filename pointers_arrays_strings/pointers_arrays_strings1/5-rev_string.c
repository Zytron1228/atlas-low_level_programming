#include "main.h"
/**
 * rev_string - reverses a string's value ("hello world!" >> "!dlrow olleh")
 * @s: string/text to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int n = 0;
	int size = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	size = i;
	while (n <= size / 2)
	{
		char a = s[n];

		s[n] = s[i];
		s[i] = a;
		n++;
		i--;
	}
}
