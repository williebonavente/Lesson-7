#include <stdio.h>
#include <math.h>

int main()
{

    float result;
    result = pow10(5);
    printf("%g\n", result);

    return 0;
}


// Note: pow10 is will not work like this -> int x = 3; pow10(x) implicit declaration of function..