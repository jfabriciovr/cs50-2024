#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y)
    {
        printf("%i is less than %i\n", x, y);
    }
    else if (x > y)
    {
        printf("%i is grater than %i\n", x, y);
    }
    else
    {
        printf("Both are equal\n");
    }

}
