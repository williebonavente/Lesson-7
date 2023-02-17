#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y, result;
    printf("Enter x coordinate >> ");
    scanf("%d", &x);

    printf("Enter y coordinate >> ");
    scanf("%d", &y);

    result = fmod(x, y);
    printf("The result of %g / %g = %d\n", x, y, result);

    return 0;
}