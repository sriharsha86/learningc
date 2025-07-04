#include <stdio.h>

int main()
{
    int num;
    input_number:
    printf("Please Enter a number : \n");
    scanf("%d", &num);

    if (num != 10)
    {
        goto input_number;
    }
    


    return 0;
}