#include "main.h"

/**
 * ctrl_d - Receive the signal.
 * @sign: Signal.
 * Return: Void.
*/

void ctrl_d(int sign)
{
	if (sign == SIGINT)
		printf("\n");
}
