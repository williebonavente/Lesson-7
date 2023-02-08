#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "abcdefghi";
    printf("This is the string: %s\n", str);
    printf("This is the string after strset: %s\n", strset((char *)str, 'k'));

    return 0;
}