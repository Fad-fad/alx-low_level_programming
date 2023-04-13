#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void print_error()
{
printf("Error\n");
exit(98);
}

int main(int argc, char *argv[])
{
int i, j;
if (argc != 3)
print_error();
for (i = 1; i < argc; i++)
{
for (j = 0; j < strlen(argv[i]); j++)
{
if (!isdigit(argv[i][j]))
{
print_error();
}
}
}
char *num1 = argv[1];
char *num2 = argv[2];
int len1 = strlen(num1);
int len2 = strlen(num2);
int len_result = len1 + len;
int *result = calloc(len_result, sizeof(int));
if (result == NULL) {
print_error();
}
for (i = len1 - 1; i >= 0; i--)
{
int carry = 0;
int n1 = num1[i] - '0';
for (j = len2 - 1; j >= 0; j--)
{
int n2 = num2[j] - '0';
int sum = n1 * n2 + result[i + j + 1] + carry;
carry = sum / 10;
result[i + j + 1] = sum % 10;
}
if (carry > 0)
result[i] += carry;
}
int i = 0;
while (i < len_result - 1 && result[i] == 0)
i++;
for (; i < len_result; i++)
printf("%d", result[i]);
printf("\n");
free(result);
return (0);
}

