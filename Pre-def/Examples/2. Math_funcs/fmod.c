#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y, result;
    x = 2.34;
    y = 1.5;

    result = fmod(x, y);
    printf("The result of %g / %g = %g\n", x, y, result);

    return 0;
}