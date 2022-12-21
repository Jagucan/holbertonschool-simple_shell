#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Is a pointer.
 * @s2: Another pointer.
 * Return: Return the comparative of s1 and s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
