#include<stdio.h>
void main() {
    int pwd;
    printf("Enter password: ");
    scanf("%d", &pwd);

    // check
    if (pwd > 999 ) {
        printf("It is a strong password");
    }
    else {
        printf("It is a weak password");
    }
}
