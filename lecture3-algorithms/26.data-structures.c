#include <stdio.h>
#include <cs50.h>
#include <string.h>

// creating a "person" data-type
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // person p1; // this if for creating only one instance of person
    // if we want to create several instances we can encapsulate them
    // inside an array:
    person people[2]; // array of type person size 2

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-454-3232";

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Phone number: %s \n", people[i].number);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}

