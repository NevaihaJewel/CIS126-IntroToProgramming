//Create a Flowchart and C Program
//Nevaiha Adams
//10/07/23

#include<stdio.h>
 
 int main()
 {
 	char charVal;
 	float floatVal;
 	
 	printf("Please enter a Character: ");
 	scanf("%c \n", &charVal);
 	
 	printf("Please enter a Float Value (decimals): ");
 	scanf("%f \n", &floatVal);
 	
 	printf("The character you enter is %c and the float value you entered is %.2f ", charVal, floatVal);
 	
 	return 0;
 }
