#include "main.h"

/**
 * functions - Implement functions for the shell.
 * @argv: Is the argument.
 * Return: Return 0 everytime.
*/

int functions(char **argv)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
	{
		perror("Error");
		return (1);
	}

	else if (pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
			perror("Error");
		free(argv);
	}

	else
	{
		wait(&status);
		if (WIFEXITED(status))
		{
			free(argv);
			return (WEXITSTATUS(status));
		}
	}

	return (0);
}
