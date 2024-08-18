#include <stdio.h>
//#include <cs50.h>

int main(void)
{

    // to create a string we used:

//   string str = "HI!";

    // but turns out "string" is not a data type already included in C
    // so we needed to #include <cs50.h> library

    // so, inside <cs50.h> there is a line like this:
    typedef char *string;
    //in that case we could still use the keyword "string" to declare a striing
    string s = "HELLO!";
    printf("%s \n", s);

    // in C, the real way to define a string is:
    char *str = "HI!";
    printf("%s \n", str); // HI!

    // in *str we store a pointer to the address of the first character of the string
    printf("%p \n", str);            // 0x55e953056010 -- same as the str[0]
    printf("%p \n", &str[0]); // H   // 0x55e953056010
    printf("%p \n", &str[1]); // I   // 0x55e953056011
    printf("%p \n", &str[2]); // !   // 0x55e953056012
    printf("%p \n", &str[3]); // nul // 0x55e953056013

    printf("%c \n", str[0]);// H
    printf("%c \n", str[1]);// I
    printf("%c \n", str[2]);// !
    printf("%c \n", str[3]);//

// pointer arihmetic
    printf("%c \n", *str);      // H
    printf("%c \n", *(str+1));  // I
    printf("%c \n", *(str+2));  // !
   // printf("%c \n", *(str+500000));  // Segmentation fault (core dumped)

    printf("%s \n", str);   // HI!
    printf("%s \n", str+1); // I!
    printf("%s \n", str+2); // !

}
