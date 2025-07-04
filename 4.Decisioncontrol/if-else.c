#include <stdio.h>

int main (){
    int age;
    printf("Enter your age : \t");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are elegible for a liecense \n");
    } else {
        printf("You are too young. Please apply after you turn 18 \n");
    }
    

    printf("Your age is : %d", age);


    return 0;
}