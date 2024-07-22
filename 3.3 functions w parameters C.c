//User Defined Functions Using Parameters
//10/22/2023
//Nevaiha Adams

#include<stdio.h>

int LeapYear(int year);

int main()
{
	int year, answer;
	printf("Enter a year: \n");
	scanf("%d", &year);
	
	answer=LeapYear(year);
	
	if(answer==1)
	{
		printf("\n%d is a leap year.", year);
	}
	else 
	{
		printf("\n%d is not a leap year.", year);
	}
	
	return 0;
}

int LeapYear(int year)
{
	int ans;
	
	if(year%100==0)
	{
		if(year%400==0)
		{
			return ans=1;
		}
		else
		{
			return ans=0;
		}
	}
	else
	{
		if(year%4==0)
		{
			return ans=1;
		}
		else
		{
			return ans=0;
		}
	}
}
