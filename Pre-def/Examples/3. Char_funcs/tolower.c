#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char chr;

    printf("Enter a Uppercase Letter >>  ");
    scanf("%c", &chr);

    printf("From this %c to this %c.", chr, towlower(chr));

    return 0;
}
