// positive and negative  number 
// 1 2 123 -> positive
// -1 -2 -432 - > negative

#include<stdio.h> 
void main() {
    float num;

    printf("Enter a number : ");
    scanf("%f", &num);


    // check 
    if (num > 0) {
        printf("It is a positive number ");
    }
    else if (num == 0) {
        printf("0 is neither positive nor negative ");
    }
    else if (num < 0) {
        printf("It is a negative number ");
    }    

    
}