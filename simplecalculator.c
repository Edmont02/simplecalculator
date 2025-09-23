#include <stdio.h>
#include <math.h>

/*function declarations*/
int addition(int x, int y);
int subtraction(int x, int y);
int division(int x, int y);
int multiplication(int x, int y);

/*main function*/
int main(){
    // initializing sum to zero starting out
    int sum = 0;
    // initializing operands
    int operand1, operand2;
    // initializing operator
    char operator;
    // initializing input for quitting calculator
    char input;

    // this will be the main interaction loop for the user
    do{
        // prompt user for input
        printf("Enter any two integer values in order (e.g., 5 3 or 101 56): ");
        scanf(" %d %d", &operand1, &operand2);
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);
        // switch statement to determine which operation to perform
        switch(operator) {
            // case for addition
            case '+':
                sum = addition(operand1, operand2);
                printf("The sum is: %d\n", sum);
                break;
            // case for subtraction
            case '-':
                sum = subtraction(operand1, operand2);
                printf("The difference is: %d\n", sum);
                break;
            // case for multiplication
            case '*':
                sum = multiplication(operand1, operand2);
                printf("The product is: %d\n", sum);
                break;
            // case for division
            case '/':
                // check for division by zero
                if(operand2 == 0){
                    printf("Error: Division by zero is not allowed.\n");
                } 
                // perform division if operand2 is not zero
                else {
                    sum = division(operand1, operand2);
                    printf("The quotient is: %d\n", sum);
                }
                break;
            // default case for invalid operator
            default:
                printf("Error: Invalid operator. Please use +, -, *, or /.\n");
        }
    // prompt user to continue or quit
    printf("Would you like to quit? (y/n): ");
    scanf(" %c", &input);
    } while (input != 'y' && input != 'Y'); // continue until user inputs 'y' or 'Y' to quit

    return 0;
}

/*function definitions*/
// function for addition
int addition(int x, int y){
    return x + y;
}
// function for subtraction
int subtraction(int x, int y){
    return x - y;
}
// function for division with error handling for division by zero
int division(int x, int y){
    if(y == 0){
        perror("Error: Division by zero is not allowed.\n");
        return 1; // Return an error code
    }
    return x / y;
}
// function for multiplication
int multiplication(int x, int y){
    return x * y;
}