#include <stdio.h>

int main (){
    int age;
    printf("Enter your age : \t");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are elegible for a liecense");
    }
    

    printf("Your age is : %d", age);


    return 0;
}