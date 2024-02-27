// voting - age > 18 , nationality == indian

#include <stdio.h>
void main()
{
    int age;
    char nationality;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you Indian (y / n) : ");
    // when we need to take a char input after some other input
    fflush(stdin);
    scanf("%c", &nationality);

    // check

    if (age > 18 && nationality == 'y')
    {
        printf("You can vote ");
    }
    else
    {
        printf("You cannot vote! ");
    }
}