#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // star p (*p), p can be any name, is a variable where we store the address of "n"
    printf("%p \n", &n); // 0x7ffffeef4edc
    printf("%p \n", p);  // 0x7ffffeef4edc
    printf("%i \n", *p); // 50 (dereference p)


}
