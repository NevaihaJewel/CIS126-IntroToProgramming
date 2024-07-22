//Finding Factors of a Numbers
//Nevaiha Adams
//10/13/23

#include<stdio.h>

int main()
{
	int count, number;
	
	printf("Enter any number to find factors: \n");
	scanf("%d", &number);
	
	printf("The factors of %d are: \n", number);
	
	for (count = 1; count <= number; count++)
	{
		if (number%count == 0)
		{
			printf("%d\n", count);
		}
	}
	
	return 0;
}
