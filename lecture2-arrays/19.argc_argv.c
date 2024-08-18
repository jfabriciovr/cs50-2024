#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    printf("The name of the file is: %s\n", argv[0]);
    printf("Hello %s\n", argv[1]);
    // The way to execute this, is:
    /*
        make argc_argv // the name of the file to compile
        ./argc_argv Fabricio
    */
   // Result
   /*
        The name of the file is: ./argc_argv
        Hello Fabricio
   */
}

// USING COMMAND LINE ARGUMENTS
/*
    There is a program in linux (you have to install it)
    called

    COWSAY

    it uses ASCII art to draw a cow, a duck or a dragon
    with a dialog cloud

    cowsay hello
    cowsay -f duck hello
    cowsay -f dragon RAWR

*/