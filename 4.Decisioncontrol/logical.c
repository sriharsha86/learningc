#include <stdio.h>

int main (){
    int age;
    char is_indian;
    printf("Enter your age : \t");
    scanf("%d", &age);
    printf("Are you an Indian (y/n) : \t");
    scanf(" %c", &is_indian);

    if (is_indian == 'y' && age >= 18 && age < 70)
    {
        printf("You can apply for the liecense \n");
    } else {
        printf("You cannot apply for the liecense");
    }
    
    
    
    
   /*
    if (is_indian == 'y')
    {
        if (age < 18)
        {
            printf("You are too young. Please apply after you turn 18 \n");
        } else if (age > 70)
        {
            printf("You are senior, You cannot apply for liecense \n");
        } else {
            printf("You can apply for the liecense \n");
        }
        
    } else {
        printf("Only Indian citizens can apply \n");
    }
    
    
    

    printf("Your age is : %d", age);
*/

    return 0;
} 