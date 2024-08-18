#include <stdio.h>

void swap (int a, int b);
void swap2 (int *a, int *b);

int main(void)
{
    int a = 1;
    int b = 3;
    printf("a: %i b: %i \n", a, b);
    //swap(a, b);
    swap2(&a, &b); //we pass the address of the variables to the function
    printf("a: %i b: %i \n", a, b);

}

void swap (int a, int b) // here we pass a copy of the values into the function
{
    int tmp = a;
    a = b;
    b = tmp;
    // outside of the function a and b didn't change
}

void swap2 (int *a, int *b) // passes references to the address of both variables
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/*
--------------
machine code
--------------
globals
--------------
heap: global variables
|
\/
heap overflow
BUFFER OVERFLOW
stack overflow
/\
|
stack: main, functions
--------------




*/
