#include <stdio.h>

int main () 
{
    int day;
    printf("Please enter the day between 1-7 : \n");
    scanf(" %d", &day);

    switch(day) {
        case 1 : 
            printf("Today is Monday");
            break;
        case 2 : 
            printf("Today is Tuesday");
            break;
        case 3 : 
            printf("Today is Wednesday");
            break;
        case 4 : 
            printf("Today is Thursday");
            break;
        case 5 : 
            printf("Today is Friday");
            break;
        case 6 : 
            printf("Today is Saturday");
            break;
        case 7 : 
            printf("Today is Sunday");
            break;
        default :
            printf("Please give input 1-7 only");
            break;

    }

    return 0;
}