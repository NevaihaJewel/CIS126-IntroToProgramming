//1.8 Performance Assessment
//Nevaiha Adams
//10/8/23

#include<stdio.h>
int main()
{
	float taxRate, salesAmount, salesTax, totalSale;
	taxRate=.08;
	
	printf("Please enter the sales amount: ");
	scanf("%f \n", &salesAmount);
	
	salesTax=salesAmount*taxRate;
	printf("Your sales tax is %f \n", salesTax);
	
	totalSale=salesAmount+salesTax;
	printf("Your total sales amount is %f", totalSale);
	
	return 0;
}
