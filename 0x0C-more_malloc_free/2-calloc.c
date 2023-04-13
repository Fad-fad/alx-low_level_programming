/**
 * _calloc - Allocate and zero-initialize memory
 * @nmemb: Number of elements to allocate
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory,
 * or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (0);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (0);

for (i = 0; i < nmemb * size; i++)
*((char *)ptr + i) = 0;

return (ptr);
}

