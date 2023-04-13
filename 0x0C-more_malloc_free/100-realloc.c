/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size, in bytes, for the reallocated memory block
 * Return: pointer to the reallocated memory block, or NULL if failed
*/

#include <stdlib.h>
#include <stdio.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *old_ptr;
unsigned int i;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}

if (ptr == NULL)
{
return (malloc(new_size));
}

if (new_size == old_size)
{
return (ptr);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (0);
}
old_ptr = ptr;
for (i = 0; i < old_size && i < new_size; i++)
{
new_ptr[i] = old_ptr[i];
}
free(ptr);
return (new_ptr);
}

