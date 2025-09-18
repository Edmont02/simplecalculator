#include <stdio.h>
#include <math.h>

/*function declarations*/
float addition(float x, float y);
float subtraction(float x, float y);
float division(float x, float y);
float multiplication(float x, float y);

/*main function*/
int main(){
    /*maybe a do-while loop for first prompt and then continual interaction with user?*/
    /*working on this part next*/

    /*testing data for addition, subtraction, division, and multiplication*/
    float a = 5.0;
    float b = 2.0;
    printf("Addition of %.2f and %.2f is: %.2f\n", a, b, addition(a, b));
    printf("Subtraction of %.2f and %.2f is: %.2f\n", a, b, subtraction(a, b));
    printf("Division of %.2f and %.2f is: %.2f\n", a, b, division(a, b));
    printf("Multiplication of %.2f and %.2f is: %.2f\n", a, b, multiplication(a, b));
    
    return 0;
}

/*function definitions*/

float addition(float x, float y){
    return x + y;
}

float subtraction(float x, float y){
    return x - y;
}

float division(float x, float y){
    if(y == 0){
        perror("Error: Division by zero is not allowed.\n");
        return 1; // Return an error code
    }
    return x / y;
}

float multiplication(float x, float y){
    return x * y;
}
