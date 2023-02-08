#include <stdio.h>
#include <math.h>

int main(void)
{
    float num;
    printf("Enter Number >> ");
    scanf("%f", &num);

    int res = floor(num);
    printf("Floor integer of %.2f = %d\n", num, res);

    return 0;
}