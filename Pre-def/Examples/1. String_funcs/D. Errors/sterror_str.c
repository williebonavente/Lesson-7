#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(void)
{
    FILE *stream;

    if (stream == fopen("mylib/myfile", "r") == NULL)
    {
        printf("%s\n", strerror(errno));
    }

    return 0;
}