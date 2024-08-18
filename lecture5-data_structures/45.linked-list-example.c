#include <stdio.h>
#include <stdlib.h>

// this type of list is not an array but a linked list of memory spaces
// that are not contiguous.

typedef struct node
{
    int number;
    struct node *next; //stores the address of the next node
}
node;

int main(int argc, char *argv[]) // takes arguments so we can stablish the list befor we run the program
{
    node *list = NULL;

    for (int i = 1; i < argc; i++) // "i" begins in 1 because that is where the arguments begin, the first value "0" is the name of the program
    {
        int number = atoi(argv[i]); // converts strings inputs to integers assuming we are going to use numbers only

        node *n = malloc(sizeof(node));
        if(n == NULL) return 1; // if we run out of memory terminate the program

        n -> number = number; //update the number field of the new node with the correspondint [i] number of the argument
        n -> next = NULL; //first get rid of any garbage value
        n -> next = list; // pre-append it to the list and make it the current beginning of the list
        list = n;
    }

    // printing through a linked list

    //create a temporary variable ptr that points to the first node of the list
    node *ptr = list;

    while(ptr != NULL) // for(node *ptr = list; ptr != NULL; ptr = ptr -> next)
    {
        printf("%i, ", ptr -> number);
        ptr = ptr -> next;

    }
    // the result is a list backwards to the order we input the list
    // when running the program ./program_name 1 2 3
    // the result is: 3 2 1

    // at last we need to free memory
    ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr -> next; // use a temporary variable so that free won't let us access the pointer to the next value
        free(ptr);
        ptr = next;
    }

}

// running time for a linked list
// O(n)


