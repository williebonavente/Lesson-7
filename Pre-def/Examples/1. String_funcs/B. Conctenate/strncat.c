#include <stdio.h>
#include <string.h>

#define SIZE 40

int main(void)
{
    char buffer1[SIZE] = "computer";
    char *ptr;

    // Call strcat with buffer and " program"
    ptr = strcat(buffer1, " program");
    printf("strcat : buffer1 = \"%s\"\n", buffer1);

    // Reset buffer1 to contain just the string " computer again"
    memset(buffer1, '\0', sizeof(buffer1));
    ptr = strcpy(buffer1, "computer");

    // Call strncat with buffer1 and " program"
    ptr = strncat(buffer1, " program", 3);
    printf("strncat: buffer1 = \"%s\"\n", buffer1);

    return 0;
}