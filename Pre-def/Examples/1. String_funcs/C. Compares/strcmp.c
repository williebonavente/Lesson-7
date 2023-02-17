#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name1[] = "wILLIe", name2[] = "Willie", name3[] = "Willie";
    int result;

    // Comparing strings str1 and str2
    result = strcmp(name1, name2);
    printf("strcmp(name1, name2) = %d\n ", result);

    // Comparing strings str1 and str3
    result = strcmp(name2, name3);
    printf("strcmp(name2, name3) = %d\n", result);


    /* strings name1 and name2 are not equal. Hence, the result is a non-zero integer.
        strings str1 and str3 are equal. Hence, the result is 0.
    */

    return 0;
}