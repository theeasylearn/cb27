// check if year is leap year or not 
// 2020 2024 2028 2032 


#include<stdio.h>
void main() {
    int year = 2021;
    printf("Enter any year : ");
    scanf("%d", &year);

    // check
    if (year <= 0) {
        printf("Invalid input ");
    }
    else if (year % 4 == 0) {
        printf("It is a leap year ");
    }
    else {
        printf("It is not a leap year ");
    }

}

