#include <stdio.h>

int main () 
{
    char gender;
    printf("Please enter your gender(m/f) : \n");
    scanf(" %c", &gender);

    gender == 'm'?printf("Male"):printf("Female"); 

    return 0;
}