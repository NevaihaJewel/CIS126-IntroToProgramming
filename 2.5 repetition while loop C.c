//Calculating weather averages
//Nevaiha Adams
//10/13/23

#include<stdio.h>

int main()
{
	int num, temp;
	float total, average;
	
	total=0.0;
	num=1;
	
	printf("Enter five temperatures to find the average. \n");
	
	while (num<= 5)
	{
		printf("What is the daily temperature: ");
		scanf("%d", &temp);
		
		num+=1;
		total+=temp;
	}
	average=total/5.0;
	
	printf("\nThe average temperature is %.2f degrees", average);
	
	return 0;
}
