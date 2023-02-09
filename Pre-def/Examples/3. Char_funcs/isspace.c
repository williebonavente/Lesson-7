#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char space;

    printf("Enter a character >> ");
    scanf("%c", &space);

    if (isspace(space))
    {
        printf("Returning %d there is no space.", isspace(space));
    }

    else
    {

     printf("Returning %d there is  aa space.", isspace(space));

    }

    return 0;
}
