#include <stdio.h>

// this type of list is not an array but a linked list of memory spaces
// that are not contiguous.

typedef struct node
{
    int number;
    struct node *next; //stores the address of the next node
}
node;

int main(void)
{
    // declare an empty linked list
    node *list = NULL;
    // allocate the first node that stores the address of the first element of the list
    //and save that address into a temporary variable called "n" that lives in another space of memory
    node *n = malloc(sizeof(node));
    /*

    list
    NULL

    n                   STRUCT (NODE)
    *pointer -------->  number: garbage_value
                        next: garbage_value

    */
   // de-referncing pointer n and assign a value to the variable number
   //  (*n).number = 1;
   // the same can be done with:
   n -> number = 1;
   n -> next = NULL;

   list = n; // makes "list" point to the same address than "n"
   /*

   list
    *pointer_________
                     |
    n               \/   STRUCT (NODE)
    *pointer -------->  number: 1
                        next: NULL
   */

  // creating a second node
  node *n = malloc(sizeof(node));
  n -> number = 2;
  n -> next = NULL;

  // Linking the two nodes and make the last node the first on the list
  // making it a STACK !
    n -> next = list;
    list = n;

    /*

    list            NODE (fist on the list)
    *pointer ----> number: 2                    NODE (last of the list)
                    *pointer -----------------> number: 1

    n
    *pointer

    */
   // so, what we have done here is pre-appending

}

