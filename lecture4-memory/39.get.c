#include <stdio.h>

int main(void)
{
    // cs50 library uses get_int function to facilitate receiving input from the user
    // but what really happens in c is this:
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i \n", x);

    //get_string

    char s[20]; // this is limited, in reality is more complex, but this works
    printf("s: ");
    scanf("%s", s);
    printf("s: %s \n", s);
}
