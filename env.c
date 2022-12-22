#include "main.h"

/**
 * _env - Print the envirion.
 * Return: Return 0 everytime.
*/

int _env(void)
{
	extern char **environ;
	int len;

	for (len = 0; environ[len]; len++)
		printf("%s\n", environ[len]);

	return (0);
}
