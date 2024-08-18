#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    // to convert word to uppercase manually
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32); // ASCII chart uppercase letters
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");

    //converting a word to uppercase using ctype library
    string s2 = get_string("Before: ");
    printf("After: ");

    // note here that n = strlen(s2) is declared before the for loop begins
    //so it doesn't have to calculate the length of the string every time it lops
    // the other way, not the most efficient is:
    // for(int i=0; i < strlen(s2); i++)
    for (int i = 0, n = strlen(s2); i < n; i++)

    {
        printf("%c", toupper(s2[i]));
    }
    printf("\n");
}
