#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Willie M. Bonavente!";
    printf("This is the string: %s\n", str);
    printf("This is the string after strnset: %s\n", strnset((char *)str, 'x', 4));

    return 0;
}