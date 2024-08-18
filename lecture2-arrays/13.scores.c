#include <stdio.h>

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    //printf("Average: %f\n", (score1 + score2 + score3) / 3); // error because we espect a float but use only int
    //printf("Average: %f\n", (score1 + score2 + score3) / 3.0); // we turn 3 into 3.0 and would work becuase at least something has to be a float
    printf("Average: %f\n", (score1 + score2 + score3) / (float) 3); // we can use type casting
}


/*
ARRAYS

An array is a way of storing your data, back to back to back in the computer's memory in such a way that
you can access each individual member easily.

this is how to declare an array of 3 integers:

int scores[3]; so se are alocating 12 bytes in memory on an array of size 3

score[0] = 72; // index 0
score[1] = 73; // index 1
score[2] = 33; // index 2

if we ask for the user for the scores:

int scores[3].
scores[0] = get_int("Score: ");
scores[1] = get_int("Score: ");
scores[2] = get_int("Score: ");

printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) (float) 3);

but this code isn't well design. but we can use a for loop to ask for the scores:

int scores[3];
for (int i = 0; i < 3; i++)
{
    scores[i] = get_int("Score: ");
}

*/
