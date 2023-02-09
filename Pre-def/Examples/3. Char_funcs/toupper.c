#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char chr;
    printf("Enter a letter >> ");
    scanf("%c", &chr);

    printf("From this '%c' to this '%c'.", chr, toupper(chr));
    return 0;
}
