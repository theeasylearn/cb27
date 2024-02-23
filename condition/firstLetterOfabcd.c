// write a pro to take char as input and print "it is first letter of abcd" if input is equal to a    

#include<stdio.h>
void main() {
    char letter;
    printf("Enter a letter ");
    scanf("%c", &letter);
    // if -> 4 == 4 
    // else -> 4 != 4
    // check
    if (letter == 'a') {
        printf("it is first letter of abcd.");   
    }
    else {
        printf("It is not first letter of abcd");
    }

    // if (letter != 'a') {
    //     printf("It is not first letter of abcd");
    // }
    
    // if (letter == 'b') {
    //     printf("It is not first letter of abcd");
    // }
}
