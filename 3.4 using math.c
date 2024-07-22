//Predefined functions using math.h
//Nevaiha Adams
//10/22/23

#include<stdio.h>
#include<math.h>

int main()
{
	float num;
	
	printf("Enter a number: ");
	scanf("%f", &num);
	
	printf("The square root of %.0f is: %.2f\n", num, sqrt(num));
	printf("The cubed root of %.0f is: %.2f", num, cbrt(num));
	
	return 0;
}
