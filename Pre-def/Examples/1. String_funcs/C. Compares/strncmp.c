#include <stdio.h>
#include <string.h>

void print_result(int, char *, char *);

#define SIZE 10

int index = 3;

int main(void)
{
    int result;
    char buffer1[SIZE] = "abcdefg";
    char buffer2[SIZE] = "abcfg";

    result = strcmp(buffer1, buffer2);
    printf("strcmp: compares each character\n");
    print_result(result, buffer1, buffer2);

    result = strncmp(buffer1, buffer2, index);
    printf("\nstrncmp: compare only the first %i character\n", index);
    print_result(result, buffer1, buffer2);

    return 0;
}

void print_result(int res, char *p_buffer1, char *p_buffer2)
{
    if (res == 0)
    {
        printf("first %i characters of \"%s\" is identical to \"%s\"\n", index, p_buffer1, p_buffer2);
    }

    else if (res < 0)
    {
        printf("first %i characters of \"%s\" is less than to \"%s\"\n", index, p_buffer1, p_buffer2);
    }

    else
    {
        printf("first %i characters of \"%s\" is greater than to \"%s\"\n", index, p_buffer1, p_buffer2);
    }
}