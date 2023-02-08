#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "Willie M. Bonavente";
    // A copy of source is created dynamically
    // and a pointer to copy is returned
    char *target = strdup(source);
    printf("%s", target);

    return 0;
}