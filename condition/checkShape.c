#include <stdio.h>
void main() {
    int heigt, width;

    printf("enter height : ");
    scanf("%d", &heigt);

    printf("Enter width: ");
    scanf("%d", &width);

    // check
    if (heigt < 0 || width < 0) {
        printf("Invalid input ");
    }
    else if (heigt == width) {
        printf("It is a square");
    }
    else {
        printf("It is rectangle ");
    }
}


/*
    && -> and -> if all conditions are true / badhi conditions true hoy tyare
    
    || -> or -> if any one condition is true / koy 1 condition true hoy to
*/