#include <stdio.h>
#include <math.h>

int main(void)
{
     double a = 142.1521;
     double b = -123.15233;
     double res;

    res = fabs(a);
    printf("The absolute value of %.f is %.f\n", a, res);

    res = fabs(b);
    printf("The absolute value of %.f is %.f\n", b, res);

    return 0;
}