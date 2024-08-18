// EXIT STATUS is an error code that the program returns when finished
// all C programs return 0 when it was succesful and 1 when there was an error

// int main (void). --- int represents that returned number
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    // makes sure that we input 1 argument when running the program
    // it says 2 because it's considering the first argument that is implicit
    // the name of the file
    // so we can put for example:
    // ./exit_status Fabricio
    // and returns
    // hello, Fabricio
    // otherwise, returns "Missing command..."
    {
        printf("Missing command-line argument\n");
        return 1; //this is only to explicitly say that the program finished with error

    }
    else
    {
        printf("hello, %s\n", argv[1]);
        return 0; // all programs return 0 if successful even if we don't write it explicitly
    }
}

// ECHO $?
/*
    after the program ends, we can put this command in the terminal to see
    what the program returns

    0 if successful
    1 if error
*/

/*
key ->
plaintext -> cipher -> ciphertext

cipher:
is an algorith that enclypts text



*/
