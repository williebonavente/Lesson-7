#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    FILE *steam;
    if ((steam = fopen("testt.txt", "r")) == NULL)
    {

        for (int i = 0; i < 30; i++)
        {
            printf("No. %d -> %s \n", i, strerror(i));
            /* code */
        }
    }

    return 0;
}