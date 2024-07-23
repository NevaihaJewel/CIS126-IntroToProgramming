//pass array to function to compute total
//Nevaiha Adams
//11/3/2023

#include <stdio.h>

void getScores(int scores[], int size)
{
	int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter score for hole %d: ", i + 1);
        scanf("\n%d", &scores[i]);
    }
}

int calculateTotal(int scores[], int size)
{
    int i, total = 0;
    for (i = 0; i < size; i++)
    {
        total += scores[i];
    }
    return total;
}


int main()
{
    const int size = 9;
    int scores[size];

    getScores(scores, size);
    
    int total = calculateTotal(scores, size);

    printf("Your total score for this game is: %d\n", total);
    printf("Please come back and play again!");

    return 0;
}
