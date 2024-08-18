// HEXADECIMAL
/*

DEC (base 10) -> 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 ... 255
HEX (base 16) -> 0 1 2 3 4 5 6 7 8 9  A  B  C  D  E  F 10 11 12 ... FF


4 bits
DEC -> 15
HEX ->  F
BIN -> 1111

FF -> 8 bits -> 1 byte -> 255

so, hexadecimal is used to because it maps really nice to 4 bits
and represent binary quantities more succinctly
to represent colors in design programs like photoshop, memory allocation, mac address, etc.

Data types in memory

        32-bit  64-bit
char    1 byte  1 byte
short   2 bytes 2 bytes
int     4 bytes 4 bytes
long    4 bytes 8 bytes
*pointer 8 bytes <------------------

float   4 bytes 4 bytes
double  8 bytes 8 bytes
long-
double  16 bytes 16 bytes

***********************
****** POINTERS ******
***********************

POINTER is an address in memory. It can be saved in a variable

OPERATORS

& - gets the address in meomory of any data or variable (0x0123)
    printf("%p", &variable);
* - dereference operator goes to an specific address in memory. also called a "pointer"
    int *p = &n;

an integer occupies 4 bytes but
a pointer occupies 8 bytes if we store it in a variable

*/



