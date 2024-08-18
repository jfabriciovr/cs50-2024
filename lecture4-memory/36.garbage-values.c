#include <stdio.h>

int main (void)
{
    int scores[1024];

    for (int i = 0; i < 1024; i++)
    {
        printf("%i \n", scores[i]);
    }

}

/*
since we didn't defined what values of the list of ints "scores"
and we print that memory, we may have GARBAGE VALUES

32700
1
0
0
0
1
0
48914560
32700
48918112
32700
48914560
32700
0
1


*/
