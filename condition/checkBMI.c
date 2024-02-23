// BMI = body mass index = mass / height * height
#include<stdio.h>
void main() {
    int mass;
    printf("Enter you weight : ");
    scanf("%d", &mass);

    int height;
    printf("Enter your height: ");
    scanf("%d", &height);


    // float BMI = mass / height * height;

    // if (mass / height * height <= 18.5) {
    //     printf("Underweight");
    // }
    // else {
    //     printf("normal");
    // }
    // printf("%f \n", (float)(mass / height * height));
    if (mass / height * height <= 18.5) {
        printf("Underweight");
    }
}
