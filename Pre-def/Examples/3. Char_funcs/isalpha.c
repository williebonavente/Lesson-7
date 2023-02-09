#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;

    printf("Enter a letter >> ");
    scanf("%c", &c);

    if (isalpha(c))
    {
        printf("The '%c' is a letter.", c);
    }

    else
    {
        printf("The '%c' is not a letter.", c);
    }

    return 0;
}