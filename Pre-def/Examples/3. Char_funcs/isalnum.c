#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;

    printf("Please Enter alphanumeric character  >> ");
    scanf("%c", &c);

    if (isalnum(c))
    {
        printf("The character '%c' is an alphanumeric ", c);
    }

    else
    {
        printf("The character '%c' is not an alphanumeric ", c);
    }

    return 0;
}