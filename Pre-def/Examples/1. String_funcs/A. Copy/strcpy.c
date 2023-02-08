#include <stdio.h>
#include<strings.h>

#define SIZE 40

int main(void)
{
    char source[SIZE] = "123456789";
    char destination[SIZE] = "987654321";

    char *return_string;

    // This is how strcpy works
    printf("destination is originally = '%s'\n", destination);
    return_string = strcpy(destination, source);
    printf("After strcpy, destination becomes '%s'\n\n", destination);

    /*
    Note: When you use strcpy(), the size of the destination
    string should be large enough to store the copied string.
    Otherwise, it may result in undefined behavior.
    */
    return 0;
}