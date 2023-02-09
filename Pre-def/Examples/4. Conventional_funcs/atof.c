#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10] = "3.14";
    float pi = atof(a);
    printf("The value of pi = %g\n.", pi);
    return (0);
}