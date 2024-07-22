//User-Defined Functions
//Nevaiha Adams
//10/19/23

#include<stdio.h>

void DisplayMessage(void);

int main()
{
	int num1, num2, addition;
	
	DisplayMessage();
	
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	addition=num1+num2;
	printf("The numbers added together are: %d \n", addition);
	
	return 0;
}

void DisplayMessage(void)
{
	printf("Welcome to the Addition Program.\n");
	printf("Enter two numbers to be added: \n");
	return;
}
