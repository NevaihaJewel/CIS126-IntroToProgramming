//2.9 while loops
//Nevaiha Adams
//10/15/23

#include <stdio.h>

int main() 
{
    int passcode = 11862;
    int userInput;
    int attempts = 0;
    
    while(attempts < 3) {
        printf("What is the password (you get three tries)? numbers only: ");
        scanf("%d", &userInput);
        
        if(userInput == passcode) {
            printf("Correct passcode entered!\n");
            break;
        }
        else {
            attempts++;
            printf("Try Again\n");
        }
    }
    
    return 0;
}
