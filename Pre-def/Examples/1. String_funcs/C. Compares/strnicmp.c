#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str1 = "Willie M. Bonavente";
    char *str2 = "WILLIE M. BONAVENTE";

    int num_result;
    // Compare the first 11 characters of str1 and str2
    // without regard to case

    num_result = strnicmp(str1, str2, 11);

    if (num_result < 0)
    {
        printf("String 1 is less than string 2.\n");
    }
    else
    {
        if (num_result > 0)
        {
            printf("String 1 is greater than string 2.\n");
        }
        else
        {
            printf("The two strings are equivalent.\n");
        }
    }

    return 0;
}