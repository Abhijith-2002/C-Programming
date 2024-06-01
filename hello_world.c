//Program to print "Hello, World !" in C

//This line tells the compiler to include standard input/output library
#include<stdio.h>

/*main function is a special function in C*.
A C-program starts its execution from the main function.
Hence every C-program must have a main function*/
void main() {

    /*main function calls the library function printf.
    printf function prints the sequence of characters given as argument to the function.
    "\n" denotes newline character.
    It adds a new line to the character sequence
    It is an example of escape characters
    There are many other escape characters in C such as "\t"(tab), "\b"(backspace) etc.*/
    printf("Hello, World !\n");

}