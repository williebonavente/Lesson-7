#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "This is a sample string.";
    char *pch;

    pch = strrchr(str, 's');
    printf("Last occurrence of 's' found at %d\n", pch - str + 1);

    return 0;
}