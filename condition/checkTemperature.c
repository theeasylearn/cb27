// checkTemperature
// take temperature as input and print "it is cold " if temperature is less than 20.2

#include<stdio.h>
void main() {
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);

    // check

    if (temp < 20.2) {
        printf("it is cold today");
    }
    // else {
    //     printf("It is hot today ");
    // }
   
    if (temp > 20.2) {
        printf("It is hot today ");
    }
    // printf("%f", temp);  // 20.200001 

}
