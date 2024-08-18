// using functions we can abstract the code to make it for readable

#include <cs50.h>
#include <stdio.h>


// ----- Declaration of functions-----
int get_size(void);
void print_grid(int size);
//------------------------------------

int main (void)
{
    //get size of grid
    int n = get_size();

    //print grid of bricks
    print_grid(n);
}

// Implementation of functions ------------
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size of grid 1-15: ");
    }
    while (n < 1 || n > 15); // make sure we get a positive number as input
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
