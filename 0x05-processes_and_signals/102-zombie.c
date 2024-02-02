#include "main.h"
/**
 * main - start of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;

	while (i < 5 && fork() > 0)
	{
		printf("Zombie process created, PID: %d", getpid());
		i++;
	}
	infinite_while();
	return (0);
}

/**
 * infinite_while - sleeps indefinitely
 *
 * Return: Zero
 */
int infinite_while(void)
{
	    while (1)
	    {
		    sleep(1);
	    }
	    return (0);
}
