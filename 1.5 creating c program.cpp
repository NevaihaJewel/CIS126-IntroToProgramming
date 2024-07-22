//Nevaiha Adams
//1.5 Creating C Program
//10/06/23

#include<stdio.h>

int main()
{
	
	int num1, num2, multiply;
	printf("Enter two numbers: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	multiply = num1 * num2;
	printf("The numbers multiplied together are: %d", multiply);
	
	return 0;
}
