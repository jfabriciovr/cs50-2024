#include <cs50.h>
#include <stdio.h>

int get_negative_int(void); // prototype

int main(void)
{
    int i = get_negative_int(); // statements are those that have semicolons
    printf("%i\n", i);
}

int get_negative_int(void) // implementation
{
    int n;
    do
    {
        n = get_int("Negative integer: "); // we don't use "int n" here because n wouldn't be accessible outside the curly brackets
    }
    // while(n < 0); // buggy
    while(n >= 0); // keep asking for a negative number when we enter 0 or a positive number
    return n;
}
