#include <cs50.h>
#include <stdio.h>
/*

a string is an array of chars

*/

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    string s = "HI!";

    printf("%c %c %c\n", c1, c2, c3); // H I !
    printf("%i %i %i\n", c1, c2, c3); // 72 73 33
    printf("%s\n", s); // HI!
    printf("%c%c%c\n", s[0], s[1], s[2]); // HI!
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]); // 72 73 33 0
    // 0 at the end means NUL (\0), the end of a string in memory
}

/*

The string:

HI!

in memory is represented by:

 H    I    !   \0 (centinal value)
 72   73   33   0 (nul)
s[0] s[1] s[2] s[3]
1byte 1byte 1byte 1byte = 4bytes in total

*/
