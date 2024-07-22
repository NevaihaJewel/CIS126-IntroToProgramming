//Creating a Flowchart and C program using IF statements
//Nevaiha Adams
//10/8/23

#include<stdio.h>

int main()
{
	
	int weekly, yearly;
	
	printff("What is your annual pay?");
	scanf("%d \n", &yearly);
	
	weekly=yearly/52;
	
	printf("Your weekly pay is: %d \n", weekly);
	if(weekly > 10000) {
		printf("You are doing well. Spend your money wisely.");
	}
	
	return 0;
}
