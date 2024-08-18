#include <stdio.h>
#include <cs50.h>

const int N = 3;//there is no method to get the lenght of an array

float average(int total_scores, int scores_array[]);

int main(void)
{
    int scores_array[N];
    for (int i = 0; i < N; i++)
    {
        scores_array[i] = get_int("Score: ");
    }
    printf("Average: %f\n", average(N, scores_array));
}

float average(int total_scores, int scores_array[])
{
    int sum = 0;
    for (int i = 0; i < total_scores; i++)
    {
        sum += scores_array[i];
    }
    return sum / (float) total_scores;
}

