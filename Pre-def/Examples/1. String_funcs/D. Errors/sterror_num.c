#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    FILE *steam;
    if ((steam = fopen("testt.txt", "r")) == NULL)
    {
        printf("%s \n", strerror(errno));
    }

    return 0;
}