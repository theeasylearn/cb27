// check vowel
// vowel = a, e, i, o, u 

#include<stdio.h>
void main() {
    char letter;
    printf("Enter any letter : ");
    scanf("%c", &letter);

    // check
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A') {
        printf("It is a vowel");
    } else 
        printf("It is a consonant ");

}
