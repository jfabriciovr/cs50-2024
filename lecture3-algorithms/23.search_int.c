#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {2, 4, 54, 34}; // array of integers

    int n = get_int("Search a number: ");
    for (int i = 0; i < 4; i++)
    {
        if (numbers[i] == n)
        {
            printf("found\n");
            return 0; // success
        }
    }
    printf("not found\n");
    return 1;

}
