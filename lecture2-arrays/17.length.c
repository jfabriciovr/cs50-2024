#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("What's your name? \n");

    //how to know the lenght of a string manually
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("Your name has %i characters\n", n);

    // length of a string using ths string.h library
    n = strlen(name);
    printf("Your name has %i characters\n", n);

}

/*
String method to know the length of a string:

strlen()

but we need to
#include <string.h>

*/
