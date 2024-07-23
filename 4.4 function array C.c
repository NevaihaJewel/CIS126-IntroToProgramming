//passing array function to compute the average
//Nevaiha Adams
//11/3/2023

#include<stdio.h>

float averageScores(float scores[5]);

int main()
{
	char name[] = "ECPI University";
	float scores[5] = {78.7, 98.4, 83.7, 85.3, 97.2};
	float result;
	
	result=averageScores(scores);
	
	printf("\nAt %s, your class average is: %.2f.", name, result);
	
	return 0;
}

float averageScores(float scores[5])
{
	float average=0.0;
	float total=0.0;
	int counter;
	
	for(counter=0; counter<=4; counter++)
	{
		printf("The score in element %d is: %.2f\n", counter, scores[counter]);
		total=total+scores[counter];
	}
	
	printf("Total = %.2f\n", total);
	average=total/5;
	
	return average;
}
