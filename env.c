#include "main.h"

/**
 * _env - Print the envirion.
 * Return: Return 0 everytime.
*/

int _env(void)
{
	char **env;
	int len;

	env = environ;

	for (len = 0; env[len]; len++)
		printf("%s\n", env[len]);

	return (0);
}