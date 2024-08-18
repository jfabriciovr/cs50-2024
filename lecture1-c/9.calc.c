#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n", x + y);

    long i = get_long("i: ");
    long j = get_long("j: ");
    printf("%li\n", i * j);

    long k = get_long("k: ");
    long m = get_long("m: ");





    float w = (float) k / (float) m;
    // 1 divided by 3

    //TRUNCATION
    printf("%f\n", w);
    //0.333333
    // truncation: by default only shows 6 decimal numbers

    // FLOATING-POINT IMPRECISION
    // when you have a finite amount of bits (memory)
    // the computer can really only be so precise
    printf("%.20f\n", w);
    // 0.33333334326744079590
    //when using 20 decimal numbers we start to see some imprecision

    // the way to make it a little more precise is to use double
    double z = (double) k / (double) m; // type casting to prevent overflow
    printf("%.20f\n", z); // 0.33333333333333331483 (floating point impresition)

    //Y2K problem
    // after 1999 we went to 1900 because we used only 2 digits to store the date
    // so 1999 was 99, so 2000 was 00, meaning the computer though it was 1900

    // we are going to have the same problem in 19 january 2038
    // where we are going to run out of bits take track of time
    // in this case we use a 32bit int to track how many seconds
    // have pased since january 1, 1970

    // INTEGER OVERFLOW
    // when you exceed

    // TRUNCATION






}
