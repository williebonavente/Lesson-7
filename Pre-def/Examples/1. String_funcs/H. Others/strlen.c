#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[20] = "Programming";
    char b[20] = {'P', 'R', 'O', 'G', 'R', 'A', 'M', 'M', 'I', 'N', 'G', '\0'};

    //  using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n", strlen(a)); 
    printf("Length of string b = %zu \n", strlen(b)); 
    

    return 0;
}