/**
 * rev_string-check the code
 * @s: var to print
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
int i;
int j;
int c;
for (i = 0; s[i] != '\0';
i++)
{}
for (j = 0; j < i;
j++)
{
i--;
c = s[j];
s[j] = s[i];
s[i] = c;
}}
