/*Variables and Arithmetic Expressions in C

Print a table of Fahrenheit values and their corresponding Celsius values
The Fahrenheit values ranges from 0 to 300 with a step size of 20*/

#include<stdio.h>

void main() {

    /*Declares the variables.
    In C all variables must be declared before being used
    Syntax : datatype variable_name
    In this example the type float is used which means the variable is of the type Floating Point (Fractional numbers)
    There are other datatypes too such as int(Integers), char(character) etc*/
    float fahr,celsius;
    float lower,upper,step;

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
        celsius = (5.0/9.0)*(fahr-32);

        /*"%f" is a placeholder
        These placeholders denotes where a particular argument is to be substitutes
        "%f" is used for substituting float argument
        In our case the value of the float variable fahr will be substituted at the first "%f"
        and the value of integer variable celsius will be substituted at the second "%f"
        "3.0f" means the number is atleast three digits wide and rounded off to 0 decimal spaces
        "6.1f" means the number is atleast six digits wide and rounded off to 1 decimal spaces
        It makes the values right aligned*/
        printf("%3.0f %6.1f\n",fahr,celsius);

        /*Increments the value of variable fahr with step size*/
        fahr = fahr+step;
    }
}