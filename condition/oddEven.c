#include <stdio.h>
void main() {
    int num;
    num = 0;

    if (num == 0) {
        printf("0 is neither even nor odd");
    }
    else if (num % 2 == 0) {
        printf("It is a even number ");
    }
    else {
        printf("It is a odd number ");
    }
}

/*
    2 4 6 8 10 222 ... 
*/