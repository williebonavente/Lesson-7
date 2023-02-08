#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[316] = "JAN THREE VERSE SIXTEEN";
    // Convert the uppercase to lowercase
    printf("%s\n", strlwr(str));

    return 0;
}