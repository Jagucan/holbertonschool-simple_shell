#include "main.h"

int main(void)
{
	size_t len = 0;
	char *buffer;
	ssize_t command;

	buffer = malloc(sizeof(char) * len);
	if (!buffer)
		return (0);
	
	while (1)
	{
	    printf ("$ ");
    	command = getline(&buffer, &len, stdin);
	    if (command == -1)
	        printf ("Erroro:");
	   
	}

	free(buffer);
	return (0);
}
