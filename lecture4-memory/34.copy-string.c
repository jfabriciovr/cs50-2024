#include <stdio.h>
#include <cs50.h> // get_string
#include <ctype.h>
#include <string.h>
#include <stdlib.h> //malloc, free

int main(void)
{
// this copies only the address

    char *s = get_string("s: "); // returns NULL if something goes wrong like no imput
    if (s == NULL)
    {
        return 1;
    }

    // allocate the same quantity of space of memory that has "s" but in a different address
    char *t = malloc(strlen(s) + 1); // +1 is conidering nul
    if (t == NULL)
    {
        return 1;
    }

    // to copy a string there is a function
    strcpy(t, s);

/*
            // but if we wanted to make it manually:
            // copies the hole string "s" into the space of memory allocated for "t"

            for (int i=0, n = strlen(s) + 1; i < n; i++) // + 1 is considering nul
            {
                t[i] = s[i];
            }
*/
    // there has to be at least one character input by the user
    if (strlen(s) > 0)
    {
        t[0] = toupper(t[0]);
    }
    printf("s: %s \n", s); // hola
    printf("t: %s \n", t); // Hola

    free(t); // when we use "malloc" to allocate memory for t, at the end of the program we free that memory

    return 0;

}
/*

nul == '\0' -> the end of a string
NULL == 0 but talking of an address

*/
