//store values in array and display
//Nevaiha Adams
//11/3/2023

#include<stdio.h>

int main() 
{
    char message[] = "My Friends Ages Program";
    int i, ages[4];

    ages[0] = 25;
    ages[1] = 27;
    ages[2] = 24;
    ages[3] = 26;

    puts(message);

    for(i = 0; i < 4; i++)
    {
        printf("Friend %d age: %d\n", i + 1, ages[i]);
    }

    return 0;
}
