#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    // Comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    // Comparing strings str1 and str3
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

    /* strings str1 and str2 are not equal. Hence, the result is a non-zero integer.
        strings str1 and str3 are equal. Hence, the result is 0.
    */

    return 0;
}