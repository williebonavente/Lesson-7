#include <stdio.h>
#include <string.h>

int main(void)
{
    const char str[] = "Willie M. Bonavente";
    const char ch = 'e';
    char *ptr;

    ptr = strchr(str, ch);
    printf("The first occurrence of the %c in %s  is at '%s'.\n", ch, str, ptr);

    return 0;
}