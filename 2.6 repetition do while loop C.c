//Demonstrating do..while using a sentinel value
//Nevaiha Adams
//10/13/23

#include<stdio.h>

int main()
{
	char ans;
	
	do
	{
		printf("C is fun.\n");
		printf("Do you want to see the message again (Y/N): ");
		scanf(" %c", &ans);
	} while (ans=='Y' || ans=='y');
	
	printf("\nThat's all for now.");
	
	return 0;
}
