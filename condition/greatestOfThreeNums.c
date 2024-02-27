// take three nums from user and print heighest of three 

#include<stdio.h>
void main() {
    int n1, n2, n3;

    printf("Enter num1 num2 and num3: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2) {
        if (n1 > n3) printf("%d", n1);
        else printf("%d", n3);
    } 
    else {
        if (n2 > n3) printf("%d", n2);
        else printf("%d", n3);
    }
}