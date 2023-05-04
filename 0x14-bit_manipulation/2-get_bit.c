#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number containing the bit to be returned.
 * @index: The index, starting from 0, of the bit to be returned.
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}

