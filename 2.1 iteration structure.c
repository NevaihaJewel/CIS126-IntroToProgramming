//Unit 2 Discussion
//Nevaiha Adams
//10/10/23

#include<stdio.h>

int main()
{
	double miles[] = {1.3, 1.5, 2.3, 2.7, 2.9, 3.2};		//declaring an array of decimals
	
	for (int i = 0; i < 6; i++) 							//loop allowing the array to repeat itself
	{														//It will start from the first element till the last	
		printf("You ran $%.2lf miles!\n", miles[i]);		//This string will print for as long as the loop lasts
	}														//"\n" separating each print in their own rows
	
	return 0;
}


