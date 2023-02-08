#include <stdio.h>
#include <string.h>

int main(void)
{

    // Reversing the string.
    char str[50] = "Willie M. Bonavente";
    printf("The given string is = %s\n", str);
    printf("After reversing the string is = %s\n", strrev(str));

    return 0;
}