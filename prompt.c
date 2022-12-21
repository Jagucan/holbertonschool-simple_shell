#include "main.h"

/**
 * prompt - Print the prompt.
 * Return: Return 0 everytime.
*/

int prompt(void)
{
	if (isatty(STDIN_FILENO) == 1)
		printf("$ - ");
	return (0);
}
