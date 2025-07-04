#include <stdio.h>

int main ()
{

    int num = 0;
    while (num != 10)
    {
        printf("Please ENter the number : \n");
        scanf("%d", &num);
    }

    printf("COngrats you have guessed the correct number");
    

    return 0;
}