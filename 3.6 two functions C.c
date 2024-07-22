//write and call two functions
//Nevaiha Adams
//10/22/23

#include <stdio.h>

void user() 
{
	puts("Welcome to the Computing Dog Age Program.");
    puts("What is your dog's age:");
}

int toHumanYears(int dogAge) {
    return dogAge * 7;
}

int main() 
{
    int dogAge;
    user();
    scanf("%d", &dogAge);

    int humanYears = toHumanYears(dogAge);
    printf("Your dog's age in human years is: %d\n", humanYears);

    puts("End of program");
    return 0;
}
