#include<stdio.h>
#include<math.h>

int main(void)
{
    int x, y;
    printf("Enter the base >>  ");
    scanf("%d", &x);

    printf("Enter the exponent >> "); 
    scanf("%d", &y);

    int result = pow(x, y);
    printf("Base = %i, Exponent = %i and the answer is %d", x,y, result); 
     
    
    return 0;
}