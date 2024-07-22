//1.9 Flowchart and Decision
//Nevaiha Adams
//10/8/23

#include<stdio.h>
 int main()
 {
 	int grade1, grade2, grade3, average;
 	
 	grade1=84;
 	grade2=98;
 	grade3=73;
 	average=(grade1+grade2+grade3)/3;
 	
 	printf("The average of the grades is: %d \n", average);
 	if(average > 65)
 	{
 		printf("You have passed!");
	 }
	 return 0;
 }
