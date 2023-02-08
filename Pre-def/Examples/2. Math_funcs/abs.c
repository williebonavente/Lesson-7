#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    printf("Enter negative number >> ");
    scanf("%d", &x);

    printf("|%d| = %d\n", x, abs(x));

    return 0;
}