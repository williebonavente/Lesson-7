#include <stdio.h>
#include <math.h>

int main(void)
{

    float x;

    printf("Enter a number >> ");
    scanf("%f", &x);

    float result = sqrt(x);

    printf("The square root of %g is %g.\n", x, result);

    return 0;
}