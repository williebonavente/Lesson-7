#include <stdio.h>
#include <math.h>

int main(void)
{
    double a;
    double b;
    double res;

    printf("Enter a negative number >> ");
    scanf("%d", &a);

    printf("Enter another negative number >> ");
    scanf("%d", &b);

    res = fabs(a);
    printf("The absolute value of %d is %d\n", a, res);

    res = fabs(b);
    printf("The absolute value of %d is %d\n", b, res);

    return 0;
}