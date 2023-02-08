#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[3115] = "EXOD 31:15 Six days may work be done";

    char bib_str[1151] = "\nbut in the seventh is the sabbath of rest, holy to the LORD: whosoever doeth any work in the sabbath day, he shall surely be put to death.";
    // Convert the uppercase to lowercase
    printf("%s %s\n", str, strupr(bib_str));

    return 0;
}