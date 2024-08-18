#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string words[2]; // array of two strings
    words[0] = "HI!"; // first string of the array
    words[1] = "BYE!"; // second string of the array
    printf("%s\n", words[0]); // HI!
    printf("%s\n", words[1]); // BYE!

    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]); // HI!
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]); // BYE!


}

/*

The two strings in memory should look like:

    H           I           !           \0          B           Y            E          !           \0
words[0][0] words[0][1] words[0][2] words[0][3] words[1][0] words[1][1] words[1][2] words[1][3] words[1][4]

with a nul char at the end of every string
*/
