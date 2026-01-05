#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial string
 * @accept: the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, match;

	while (*s)
	{
		match = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				match = 1;
				break;
			}
		}
		if (match)
		{
			count++;
			s++;
		}
		else
		{
			return (count);
		}
	}

	return (count);
}
