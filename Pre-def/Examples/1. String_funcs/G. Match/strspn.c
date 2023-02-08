// C program to illustrate strspn() function

#include <stdio.h>
#include <string.h>

int main(void)
{
    int len = strspn("Willie M. Bonavente", "Willie");
    printf("Length of initial segment matching : %d\n", len);

    return 0;
}