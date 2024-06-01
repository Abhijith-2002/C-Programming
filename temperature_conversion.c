/*Variables and Arithmetic Expressions in C

Print a table of Fahrenheit values and their corresponding Celsius values
The Fahrenheit values ranges from 0 to 300 with a step size of 20*/

#include<stdio.h>

void main() {

    /*Declares the variables.
    In C all variables must be declared before being used
    Syntax : datatype variable_name
    In this example the type int is used which means the variable is of the type Integer
    There are other datatypes too such as float(floating point numbers), char(character) etc*/
    int fahr,celsius;
    int lower,upper,step;

    /*Initialiazes the variables
    Assigns an initial values to the variables*/
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    /*While loop is used when repetition is needed
    While loop tests the condition in the paranthesis which in our case is "fahr<=upper"
    If the condition is true then the body of the while loop is executed.
    After every execution the condition is retested and the process is repeated.
    If the condition becomes false then the loop ends and execution continues at the statement that follows the while loop
    In our case there are no statments after the while loop , so the program terminates*/
    while(fahr<=upper) {

        /*The celsius value is computed(through arithmetic expression) and assigned to the variable celsius*/
        celsius = 5*(fahr-32)/9;

        /*"%d" is a placeholder
        These placeholders denotes where a particular argument is to be substitutes
        "%d" is used for substituting integer argument
        In our case the value of the integer variable fahr will be substituted at the first "%d"
        and the value of integer variable celsius will be substituted at the second "%d"
        "\t" denotes an escape character (tab).
        It adds a tab space*/
        printf("%d\t%d\n",fahr,celsius);

        /*Increments the value of variable fahr with step size*/
        fahr = fahr+step;
    }
}