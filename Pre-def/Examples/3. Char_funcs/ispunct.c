#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // Filtering the punctuation.

    char punct;
    printf("Enter punctuation mark >> "); 
    scanf("%c", &punct);

    if (ispunct(punct))
        printf("Punctuation Mark '(%c)' found. ", punct);

    else
        printf("Punctuation Mark not found.");

    return 0;
}