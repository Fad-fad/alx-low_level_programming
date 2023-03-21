#include <unistd.h>
/**
 * putchar - writes c
 * Return: On success 1
 */

int _puchar(char c)
{
	return(write(1,&c,1));
}
