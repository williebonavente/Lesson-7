#include <stdio.h>
#include <string.h>

void print_result(int, char *, char *);

#define SIZE 10

int index = 3;

int main(void)
{
    int result;
    char pass1[SIZE] = "WILLIE_M";
    char pass2[SIZE] = "willie_m";

    result = strcmp(pass1, pass2);
    printf("strcmp: compares each character\n");
    print_result(result, pass1, pass2);

    result = strncmp(pass1, pass2, index);
    printf("\nstrncmp: compare only the first %i character\n", index);
    print_result(result, pass1, pass2);

    return 0;
}

void print_result(int res, char *p_pass1, char *p_pass2)
{
    if (res == 0)
    {
        printf("first %i characters of \"%s\" is identical to \"%s\"\n", index, p_pass1, p_pass2);
    }

    else if (res < 0)
    {
        printf("first %i characters of \"%s\" is less than to \"%s\"\n", index, p_pass1, p_pass2);
    }

    else
    {
        printf("first %i characters of \"%s\" is greater than to \"%s\"\n", index, p_pass1, p_pass2);
    }
}