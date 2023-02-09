#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    long l;
    char *s;

    s = "100000 dollars";
    l = atol(s);
    printf("l = %.ld\n", l);

    return 0;
}
