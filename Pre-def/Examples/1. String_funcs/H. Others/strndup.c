// C program to demonstrate strndup()
#include <stdio.h>
#include <string.h>
char *strndup(char *str, int chars);

int main()
{
    char source[] = "Willie M. Bonavente";

    // 5 bytes of source are copied to a new memory
    // allocated dynamically and pointer to copied
    // memory is returned.
    char *target = strndup(source, 8);

    printf("%s", target);
    return 0;
}

char *strndup(char *str, int chars)
{
    char *buffer;
    int n;

    buffer = (char *)malloc(chars + 1);
    if (buffer)
    {
        for (n = 0; ((n < chars) && (str[n] != 0)); n++)
            buffer[n] = str[n];
        buffer[n] = 0;
    }

    return buffer;
}
/*

AFAIK there is no method strndup in string.h or stdlib.h, 
try using strdup() which is probably what you want.
If you really need to specify the length you want allocated you could do 
it using malloc and memcpy instead.
Source: Stack overflow
*/