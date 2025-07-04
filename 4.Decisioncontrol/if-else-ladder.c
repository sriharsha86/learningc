#include <stdio.h>

int main (){
    int age;
    printf("Enter your age : \t");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("You are too young. Please apply after you turn 18 \n");
    } else if (age > 70)
    {
        printf("You are senior, You cannot apply for liecense \n");
    } else {
        printf("You can apply for the liecense \n");
    }
    
    

    printf("Your age is : %d", age);


    return 0;
}