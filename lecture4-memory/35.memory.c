#include <stdio.h> // printf
#include <stdlib.h> // malloc

int main (void)
{
    int *x = malloc(3 * sizeof(int));

    if (x == NULL) return 1;

    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    free(x);

    return 0; // this line is not necessary

}

/*
    VALGRIND

    is a program used to find bugs of memory

    it runs on a program already compiled

    valgrind ./memory

*/
