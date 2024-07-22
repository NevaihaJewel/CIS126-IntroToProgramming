//2.2 This program checks to see if a number is even or odd
//Nevaiha Adams
//10/10/23

#include<stdio.h>

int main()
{
	
	int number;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	if (number % 2 == 0) {
		printf("%d is even.", number);
	} else {
		printf("%d is odd.", number);
	}
	
	return 0;
}
