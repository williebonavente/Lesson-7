#include <stdio.h>
#include <string.h>

#define SIZE 40

int main(void)
{

    char source[SIZE] = "123456789";
    char destination[SIZE] = "abcdefg";

    char *return_string;

    int index = 5;

    // This is how strncpy works
    printf("destination is originally = '%s'\n", destination);
    return_string = strncpy(destination, source, index);
    printf("After strncpy, destination1 becomes = '%s'\n", destination);

    return 0;
}