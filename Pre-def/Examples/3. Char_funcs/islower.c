#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    printf("Enter the character in 'lower case form' >> ");
    scanf("%c", &ch);

    if (isalpha(ch))
    {
        if (islower(ch))
            printf("The '%c' is in lower case form", ch);

        else
            printf("The '%c' is not in lower case form", ch);
    }

    else
    {
        printf("Please enter a letter. ");
    }

    return 0;
}