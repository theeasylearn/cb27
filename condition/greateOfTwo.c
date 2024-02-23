// greatestnum
// write a pro to take two nums as input and print greatest of them

#include <stdio.h>
void main()
{
    int num1, num2;

    printf("Enter number 1 : ");
    scanf("%d", &num1);

    printf("Enter number 2 : ");
    scanf("%d", &num2);

    // check
    /*  if (num1 > num2) {
          printf("number 1 is greater %d", num1);
      }

      if (num2 > num1) {
          printf("number 2 is greater %d", num2);
      }
      */


     if (num1 > num2) {
        // condition is true
        printf("num1 is greater than num2, %d", num1);
     }
     else {
        // condition is false 
        printf("num2 is greater than num1, %d", num2);
     }
}