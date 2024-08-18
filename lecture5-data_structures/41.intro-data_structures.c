/*
DATA STRUCTURES

https://www.youtube.com/live/X8h4dq9Hzq8?si=pIxSXAuzOa6aUBw7



*/
/*
  Abstract data types

QUEUES
  Queues - FIFO -> First In First Out
  enqueue - adding to the end of the queue
  dequeue - removing from the begining of the queue

STACKS
  stacks - LIFO (last in first out)
  push - adding on top of a stack
  pop - removing from the top of the stack


*/

/*

struct:
  to let us create our own structure in memory, like a collections of variables
dot operator (.):
  to access a variable insde a struct (person.name)
star operator (*):
  multiplication, declare (create) and de-reference (go to the address) pointers
-> (arrow, hyphen and angle bracket):
  combines the dot and star operators functions

*/
/*
LINKED LISTS
a way to make lists with spaces of memory that are not contiguous.

if we have 3 values in 3 different sapces of memory:

0x123
value: 1
            0x456
            value: 2
                          0x789
                          value: 3


first we reserve an extra space next to each value, where we point to the
next value of the list:

0x123
value: 1
0x456 -----> 0x456
            value: 2
            0x789 ------> 0x789
                          value: 3
                          0x0 (NULL) to stablish the end of the list

next, we store in another place in memory, the address of the first element
of the list:

pointer: 0x123

                  0x123
                  value: 1
                  pointer:0x456 -----> 0x456
                                      value: 2
                                      pointer: 0x789 ------> 0x789
                                                            value: 3
                                                            NULL

NODE: each of the main spaces that store the data
METADATA: the space where we store the pointer to the next value


typedef struct node //the word "node" is not a keyword, can be any word
{
  int number;
  struct node *next; //stores the address of another node
}
node;

DOWNSIDES OF A LINKED LIST
- uses more memory
- you cant't index the valus like an array
- we can't use binary search

*/

/*
******************
   BINARY TRESS
******************

/*
having the SORTED list of numbers we can use binary search splitting in halves the list:

1  2  3  4  5  6  7 --> this is an array or a continous set of values in memory.

but if we make visually the same divisions of the binary search we can consider a tree like
distribution of the list like so:

      root
       4
    /     \
   2        6
 /   \    /   \
1     3  5     7

in this case, the values don't have to be contigous in memory and we can use pointers to
link them together.




*/

/*
*****************
  DICTIONARY
******************

  word  |  definition
  KEY   |  VALUE
------- | ------------
  name  |   number
        |


*/
/*
***************
  HASHING
***************

Reducing a problem into smaller ones

HASH FUNCTION:

HASH TABLES:

typedef struct node
{
  char *name;
  char *number;
  struct node *next;
}
node;

node *table[26];

*/
/*
***************
  tries O(1) is the fastest but uses a lot of memory
**************

is a tree each of whose nodes is an array

node *trie;

typedef struct node
{
  char *number;
  struct node *childern[26];
}
node;

*/
