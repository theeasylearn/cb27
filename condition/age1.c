// write a pro to take age of user as a input. If age is greater than 18 print "You can vote"
#include<stdio.h>
void main() {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    // check
    if (age > 18) 
    {
        // block of code   
        printf("You can vote");
    }
    else {
        printf("You cannot vote.");
    }

    // if (age < 18) {
    //     printf("You cannot vote.");
    // }

    // if (age == 18) {
    //     printf("you can vote 2");
    // }

}