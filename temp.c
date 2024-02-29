// nested if 
// Create a program that determines whether a given character is a vowel or a consonant using nested if statements.

// Write a program to determine the day of the week for a given date (considering leap years) using nested if statements.

// ternary 
// Write a program to find the maximum of two numbers using a ternary operator

// Create a program that determines whether a given number is even or odd using a ternary operator.

// Develop a program that compares three numbers and finds the largest among them using ternary operators.

// Write a program to check if a given character is a vowel or a consonant using a ternary operator.


#include<stdio.h>
int main() {

    char ch = 'r';

    if (ch == 'a') {
        printf("yes");
    } else {
        if (ch == 'o') {
            printf("yes");
        } else {
            if (ch == 'e') {
                printf("ys");
            } else {
                if (ch == 'u') {
                    printf("ys");
                } else {
                    if (ch == 'i') {
                        printf("ye");
                    } else {
                        printf("n");
                    }
                }
            }
        }
    }

    return 0;
}