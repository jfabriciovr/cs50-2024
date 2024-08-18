#include <stdio.h> // Header file - imports a library needed so we can use functions like "printf"

int main(void) // main function
{
    printf("hello, world\n"); //statement, equivalent to a sentence
}

/*
to run the program type on the terminal:

    make hello
    ./hello


 hello
 is the name of the file without the extension .c

 make hello
 is the compile and creates another file called just hello

 ./hello
 is the way to execute the file "hello" which is the machine code

 \n
 is a special sequence of symbols that creates a new line
 also called "escape sequence"

*/

/*

MANUAL PAGES
manual.cs50.io

is a simplified version of the documentation of the C language
created by CS50 to list the functions included on some libraries used in this course

for example to go directly to the stdio.h list we can open:
manual.cs50.io/#stdio.h

cs50 has its own library
manual.cs50.io/#cs50.h

which has some functions for input like:
get_char, get_double, get_float, get_int, get_long, get_string



*/
