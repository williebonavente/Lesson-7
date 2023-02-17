#include <stdio.h>
#include <string.h>

int main(void)
{
    // Compare two strings as lowercase

    int check;
    check = stricmp("Willie", "WILLIE") == 0 ? printf("The strings are equivalent.\n") :
                                             printf("The strings are not equivalent.\n");
    return 0;
}