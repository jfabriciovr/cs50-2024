#include <stdio.h>

int main(void)
{
    int counter = 3;
    while (counter > 0)
    {
        printf("meow\n");
        counter--; // syntactic sugar of ( counter = counter -1 )
    }
    printf("\n");

    counter = 1;
    while (counter <= 3)
    {
        printf("meow\n");
        counter++;
    }
    printf("\n");

//this is the best way logically to loop with while
    int j = 0;
    while (j < 3) // going up to, but not through 3
    {
        printf("meow\n");
        j++;
    }
    printf("\n");

//this is the best way logically to loop with for
    for (int i = 0; i < 3; i++) // int i gets zero, i is less than 3, i plus plus
    {
        printf("meow\n");
    }

// infinite loop
/*
    while (true) //while (1), for this we need to include #include <stdboole.h>
    {
        printf("meow\n");
    }

    // to interrupt an infinite loop you can use control + C to stop the program
*/
}
