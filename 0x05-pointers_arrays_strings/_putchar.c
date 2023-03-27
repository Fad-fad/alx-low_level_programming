#include <unistd.h>
/**
 * putchar - writes c
 * Return: On success 1
 */

int _putchar(char c)
{
        return(write(1,&c,1));
}
