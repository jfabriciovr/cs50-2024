#include <stdio.h>
#include <cs50.h> // get_string
#include <ctype.h>
#include <string.h>


int main(void)
{
// this copies only the address
    char *s = get_string("s: ");
    char *t = s;
    printf("%p \n", s);
    printf("%p \n", t);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    printf("s: %s \n", s);


}

