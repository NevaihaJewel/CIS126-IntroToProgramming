//Intro to arrays
//Nevaiha Adams
//11/2/2023

#include <stdio.h>

int main()
{
	int values[3]={3, 10, 6};
	int counter;
	
	for (counter=0; counter<=2; counter ++)
	{
		printf("The value in element %d of the initialized array is: %d\n", counter, values[counter]);
	}
	
	values[0]=15;
	values[1]=18;
	values[2]=19;
	
	printf("\n\n");
	
	for (counter=0; counter<=2; counter ++)
	{
		printf("The value in element %d of the assigned values in the array is: %d\n", counter, values[counter]);
	}
	
	printf("\n\n");
	
	for (counter=0; counter<=2; counter ++)
	{
		printf("\nEnter three values: ");
		scanf("%d", &values[counter]);
	}
	
	printf("\n\n");
	
	for (counter=0; counter<=2; counter ++)
	{
		printf("The value in element %d of user input is: %d\n", counter, values[counter]);
	}
	
}
