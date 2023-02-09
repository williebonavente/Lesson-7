#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char x;
    printf("Enter a number >> ");
    scanf("%c", &x);

    if (isdigit(x))
    {
        printf("The character input is valid\n");
    }

    else
    {
        printf("Not valid!\n");
    }

    return 0;
}