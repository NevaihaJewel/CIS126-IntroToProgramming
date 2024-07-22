//using ctype.h and stdio.h
//Nevaiha Adams
//10/22/23

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char c;

    puts("Enter a character: ");
    scanf("%c", &c);

    if (islower(c)) {
        printf("\n%c is a lowercase letter.", c);
    } 
    else if (isupper(c)) {
        printf("\n%c is an uppercase letter.", c);
    } 
    else {
        puts("You did not enter an uppercase or lowercase letter.");
    }

    return 0;
}
