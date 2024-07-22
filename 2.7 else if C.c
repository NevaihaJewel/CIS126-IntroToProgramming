//2.7 else..if statements
//Nevaiha Adams
//10/15/23

#include <stdio.h>

int main() 
{
    int years;

    printf("How many years of service?: ");
    scanf("%d", &years);
    
    if (years > 25) {
        printf("You receive a gold watch");
    } else if (years > 15 && years <= 25) {
        printf("You receive a silver pen");
    } else if (years > 5 && years <= 15) {
        printf("You receive an attractive pin");
    } else if (years >= 0 && years <= 5) {
        printf("You receive a pat on the back");
    }
    
    return 0;
}
