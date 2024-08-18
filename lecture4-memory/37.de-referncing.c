#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *x; // initially this pointers don't point to any address yet
    int *y;
    x = malloc(sizeof(int)); // allocates a new integer pointee, so now "x" points to an address
    *x = 42; // de-referencing x, means that we go to the address pointed by x and assign a value
    y = x; // copies the address stored in x to y, now both point to the same address
    *y = 13; 
    printf("x: %i \n", *x); // x: 13
    printf("y: %i \n", *y); // y: 13
}
