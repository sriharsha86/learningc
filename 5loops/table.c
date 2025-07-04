#include <stdio.h>

int main ()
{
    printf("Welcome to Printing Tables\n");
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);

    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    
    return 0;
}