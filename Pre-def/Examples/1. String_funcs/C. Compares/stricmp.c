#include <stdio.h>
#include <string.h>

int main(void)
{
    // Compare two strings as lowercase
    if (0 == stricmp("hello", "HELLO"))
    {
        printf("The strings are equivalent.\n");
    }

    else
    {
        printf("The strings are not equivalent.\n");
    }

    return 0;
}