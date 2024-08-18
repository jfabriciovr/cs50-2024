#include <cs50.h>
#include <stdio.h>

int main (void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("? ");
    }
    printf("\n");
    /*

    ? ? ? ?

    */

    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
    /*

    #
    #
    #

    */
// ---------------------------------------

    int n;
    do
    {
        n = get_int("Size of grid between 1 and 4: "); // get saize of grid
    }
    while (n < 1 || n > 4); // only accepts options 1 - 4

    // print grid of bricks
    for (int i = 0; i < n; i++)
    {
        printf("row %i ", i+1);
        for (int j = 0; j < n; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
        /*
        
        Size of grid between 1 and 4: 4

        row 1 # # # #
        row 2 # # # #
        row 3 # # # #
        row 4 # # # #

        */
}
