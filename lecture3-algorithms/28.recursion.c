#include <stdio.h>
#include <cs50.h>

void draw (int n);
void drawRecursion (int n);

int main (void)
{
    int height = get_int("Height: ");
    draw(height);
    drawRecursion(height);

}

void draw (int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void drawRecursion (int n)
{
    // base case
    if (n <= 0)
        return;

    drawRecursion (n -1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");

}
