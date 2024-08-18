#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Carter", "Mike"};
    string numbers[] = {"+1-45344-345", "+1-234234-34"};

    string s = get_string("Search name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], s) == 0)
        {
            printf("Phone number: %s \n", numbers[i]);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}

// echo $?
