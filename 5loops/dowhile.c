#include <stdio.h>

int main ()
{
    int i = 1;
    do {
        printf("%d", i);
        i++;
    } while (i <= 10);
    
    int num;
    do
    {
        printf("Please Enter a number : ");
        scanf(" %d", &num);
    } while (num != 10);
    

    printf("COngrats you have guessed the correct number");
    

    return 0;
}