// Calculator: Write a simple calculator program that takes two numbers and an operator (+, -, *, /) as input, and performs the corresponding operation.

#include<stdio.h>
void main() {
    int num1, num2;

    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    char operator;
    printf("Enter operator : ");
    fflush(stdin);  
    scanf("%c", &operator); 

    if (operator == '+') {
        printf("sum = %d", num1 + num2);
    }
    else if (operator == '-') {
        printf("subtraction = %d", num1 - num2);
    }
    else if (operator == '*') {
        printf("Product = %d", num1 * num2);
    }
    else if (operator == '/') {
        printf("division = %.2f", (float)num1 / num2);
    }
}

/*
    + - * / %

    10, 2

    10 % 3 => 1 

    float / int -> float 

    fflush(stdin); -> taking char input after a int, float input 
*/