#include<stdio.h>
void main() {
    // int year = 2021;
    // if (year % 4 == 0) {
    //     printf("It is a leap year ");
    // } else {
    //     printf("It is not leap year");
    // }

    // int rahul = 80;
    // int megha = 80;
    // if (rahul > megha) {
    //     printf("Rahul scored higher than Megha");
    // } 
    // else if (rahul < megha) {
    //     printf("Megha scored higher than Rahul");
    // }
    // else if (rahul == megha) {
    //     printf("Both Rahul and Megha scored equal");
    // }
    // else {
    //     printf("abcd");
    // }

    int age = 18;
    char nationality = 'y';

    if (age > 18 && nationality == 'y') {
        printf("You can vote");
    }
    else if ((age > 0 && age <= 18) || nationality == 'n') {
        printf("You cannot vote");
    }
    else {
        printf("Invalid input ");
    }
}