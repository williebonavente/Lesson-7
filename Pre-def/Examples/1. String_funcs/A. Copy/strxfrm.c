#include <stdio.h>
#include <strings.h>

int main(void)
{
    char *string1, buffer[80];
    int length;

    printf("Type in a string of characters >> ");
    string1 = gets(buffer);
    length = strxfrm(NULL, string1, 0);
    printf("You would need a %d element array to hold the string.\n", length);
    printf("%s transformed according to this program's locale.", string1);

    return 0;

    /* The strxfrm() function returns the length of the transformed string, 
    excluding the ending null character. If the returned value is greater than or 
    equal to count, the contents of 
     the transformed string are indeterminate.
    */


}